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
			play : ETF_ACTIONS_NEW_GAME
			new_board : ETF_BOARD
    	do
			-- perform some update on the model state

			if model.BOARD.game_status ~ 0 then
				new_board := model.board.deep_twin
				new_board.set_message_state("Game already started")
				new_board.set_state (model.state_counter)
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			else
				model.new_game (level.as_integer_32, TRUE)
				model.board.set_state (model.state_counter.deep_twin)
				model.set_last_board (model.board.deep_twin)
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
