note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
		redefine undo end
create
	make
feature -- command
	undo
    	do
			-- perform some update on the model state
			if model.history.after then
				model.history.back
			end

			if model.history.on_item then
				model.history.item.action.undo
				model.board.set_message_state ("(= state " + model.history.item.state.out + ")"+" OK")
				model.history.back
			else
				model.board.set_message_state("Nothing to undo")
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
