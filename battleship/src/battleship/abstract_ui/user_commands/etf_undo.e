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
			if model.board.history.after then
				model.board.history.back
			end

			if model.board.history.on_item then
				model.board.history.item.undo
				model.board.history.back


				model.board.set_message_state ("OK")
			else
				model.board.set_message_state("Nothing to undo")
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
