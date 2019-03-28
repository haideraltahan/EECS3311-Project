note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_GIVE_UP
inherit
	ETF_GIVE_UP_INTERFACE
		redefine give_up end
create
	make
feature -- command
	give_up
    	do
			-- perform some update on the model state
			if not (model.board.game_status ~ 0) then
				model.board.set_message("Game not started", "Start a new game")
			else
				model.board.give_up
				model.reset_history
				model.board.set_message("OK", "You gave up!")
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
