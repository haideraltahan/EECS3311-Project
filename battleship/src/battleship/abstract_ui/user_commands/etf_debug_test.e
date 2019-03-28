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
    	do
			-- perform some update on the model state
			if model.BOARD.game_status ~ 0 then
				model.set_message("Game already started", "Fire Away!")
			else
				model.new_game (level.as_integer_32, TRUE)
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
