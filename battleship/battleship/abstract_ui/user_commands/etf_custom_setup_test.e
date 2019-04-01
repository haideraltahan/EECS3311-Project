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
			play : ETF_ACTIONS_NEW_GAME
			new_board : ETF_BOARD
			ships_bombs_min, ships_bombs_max : INTEGER
			shots_min, shots_max : INTEGER
    	do
			-- perform some update on the model state

			ships_bombs_min := dimension.as_integer_32 // 3
			ships_bombs_max := (dimension.as_integer_32 // 2) + 1
			shots_min := ships.as_integer_32 * (ships.as_integer_32 + 1) // 2
			shots_max := dimension.as_integer_32 * dimension.as_integer_32

			if ships < ships_bombs_min and model.board.game_status /= 0 then
				new_board := model.board.deep_twin
				new_board.set_message("Not enough ships", "Start a new game")
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			elseif ships > ships_bombs_max and model.board.game_status /= 0 then
				new_board := model.board.deep_twin
				new_board.set_message("Too many ships", "Start a new game")
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			elseif max_shots < shots_min and model.board.game_status /= 0 then
				new_board := model.board.deep_twin
				new_board.set_message("Not enough shots", "Start a new game")
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			elseif max_shots > shots_max and model.board.game_status /= 0 then
				new_board := model.board.deep_twin
				new_board.set_message("Too many shots", "Start a new game")
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			elseif num_bombs < ships_bombs_min and model.board.game_status /= 0 then
				new_board := model.board.deep_twin
				new_board.set_message("Not enough bombs", "Start a new game")
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			elseif num_bombs > ships_bombs_max and model.board.game_status /= 0 then
				new_board := model.board.deep_twin
				new_board.set_message("Not enough bombs", "Start a new game")
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			elseif model.BOARD.game_status ~ 0 then
				new_board := model.board.deep_twin
				new_board.set_message_state("Game already started")
				new_board.set_state (model.state_counter)
				create play.make (new_board)
				model.history.extend_history (play)
				play.execute
			else
				model.custom_game (dimension.as_integer_32, ships.as_integer_32, max_shots.as_integer_32, num_bombs.as_integer_32, TRUE)
				model.board.set_state (model.state_counter.deep_twin)
				model.set_last_board (model.board.deep_twin)
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
