note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW_GAME
inherit
	ETF_NEW_GAME_INTERFACE
		redefine new_game end
create
	make
feature -- command
	new_game(level: INTEGER_64)
		require else
			new_game_precond(level)
    	local
			action: 	ETF_ACTIONS_NEW_GAME
    	do
			-- perform some update on the model state
			if model.BOARD.game_status ~ 0 then
				model.board.set_message("Game already started", "Fire Away!")
			else
				create action.make (model.new_game (level.as_integer_32, FALSE))
				action.execute
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
