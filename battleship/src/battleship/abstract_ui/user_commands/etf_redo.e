note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REDO
inherit
	ETF_REDO_INTERFACE
		redefine redo end
create
	make
feature -- command
	redo
		local
			z: INTEGER
    	do
			-- perform some update on the model state
			if
				model.history.before
				or not model.history.after
			then
				model.history.forth
			end

			if not (model.board.game_status ~ 0) then
				model.board.set_message("Game not started", "Start a new game")
			end

			-- redo
			if model.history.on_item then
				model.history.item.redo
				model.board.set_message_state ("(= state " + (model.history.item.get_state.newp + 1).out + ")"+" OK")
				model.redo_check_true
			elseif model.check_redo then
				z := model.get_start_state + 1
				model.board.set_message_state ("(= state " + z.out + ")")
				model.redo_check_false
				model.undo_check_true
			else
				model.board.set_message_state("Nothing to redo")
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
