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
				model.board.set_message_state ("(= state " + (model.history.item.get_state.newp + 1).out + ") "+model.history.item.get_state_feedback.newp)
				model.board.set_message_action (model.history.item.get_state_action.newp)
			else
				model.board.set_message_state("Nothing to redo")
				if model.board.get_action_feedback.has_substring ("Hit!") or model.board.get_action_feedback.has_substring ("Miss!") then
					model.board.set_message_action ("Keep Firing!")
				end
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
