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
				model.board.history.before
				or not model.board.history.after
			then
				model.board.history.forth
			end

			-- redo
			if model.board.history.on_item then
				model.board.history.item.redo
				model.board.set_message_state("ok")
			else
				model.board.set_message_state("Nothing to redo")
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
