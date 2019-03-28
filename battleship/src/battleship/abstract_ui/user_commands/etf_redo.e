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

			-- redo
			if model.history.on_item then
				model.board.set_message_state ("(= state " + model.history.item.state.out + ")"+" OK")
				model.history.item.action.redo
			else
				model.board.set_message_state("Nothing to redo")
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
