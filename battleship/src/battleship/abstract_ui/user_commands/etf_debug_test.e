note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DEBUG_TEST
inherit
	ETF_DEBUG_TEST_INTERFACE
		redefine debug_test end
create
	make
feature -- command
	debug_test(level: INTEGER_64)
		require else
			debug_test_precond(level)
		local
			action: 	ETF_ACTIONS_DEBUG_TEST
    	do
			-- perform some update on the model state
			if model.BOARD.game_status ~ 0 then
				model.board.set_message("Game already started", "Fire Away!")
			else
				create action.make (model.new_game (level.as_integer_32, TRUE))
				action.execute
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
