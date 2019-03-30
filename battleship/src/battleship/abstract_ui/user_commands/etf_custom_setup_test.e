note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CUSTOM_SETUP_TEST
inherit
	ETF_CUSTOM_SETUP_TEST_INTERFACE
		redefine custom_setup_test end
create
	make
feature -- command
	custom_setup_test(dimension: INTEGER_64 ; ships: INTEGER_64 ; max_shots: INTEGER_64 ; num_bombs: INTEGER_64)
		require else
			custom_setup_test_precond(dimension, ships, max_shots, num_bombs)
    	local
			play : ETF_ACTIONS_CUSTOM_SETUP_TEST
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
				model.custom_game (dimension.as_integer_32, ships.as_integer_32, max_shots.as_integer_32, num_bombs.as_integer_32, TRUE)
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
