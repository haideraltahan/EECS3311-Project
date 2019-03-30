note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_BOMB
inherit
	ETF_BOMB_INTERFACE
		redefine bomb end
create
	make
feature -- command
	bomb(coordinate1: TUPLE[row: INTEGER_64; column: INTEGER_64] ; coordinate2: TUPLE[row: INTEGER_64; column: INTEGER_64])
		require else
			bomb_precond(coordinate1, coordinate2)
		local
			shot : ETF_ACTIONS_FIRE
			new_board : ETF_BOARD
    	do
			-- perform some update on the model state

			if not (model.board.game_status ~ 0) then
				model.board.set_message("Game not started", "Start a new game")
			elseif not (model.board.is_valid(coordinate1) and model.board.is_valid(coordinate2)) then
				model.board.set_message("Invalid coordinate", "Keep Firing!")
				if model.get_is_cusom then
					create shot.make (model.board.deep_twin)
					model.history.extend_history (shot)
				end
			elseif model.board.bombs ~ model.board.max_bombs then
				model.board.set_message ("No bombs remaining", "Keep Firing!")
				if model.get_is_cusom then
					create shot.make (model.board.deep_twin)
					model.history.extend_history (shot)
				end
			elseif not model.board.is_adjacent(coordinate1, coordinate2) then
				model.board.set_message_state ("Bomb coordinates must be adjacent")
				if model.get_is_cusom then
					create shot.make (model.board.deep_twin)
					model.history.extend_history (shot)
				end
			elseif model.board.is_hit(coordinate1.row.as_integer_32, coordinate1.column.as_integer_32) or model.board.is_hit(coordinate2.row.as_integer_32, coordinate2.column.as_integer_32) then
				model.board.set_message ("Already fired there", "Keep Firing!")
				if model.get_is_cusom then
					create shot.make (model.board.deep_twin)
					model.history.extend_history (shot)
				end
			else
				-- shoot the area
				new_board := model.board.deep_twin
				new_board.bomb (coordinate1, coordinate2)
				new_board.set_state (model.state_counter)
				create shot.make (new_board)
				model.history.extend_history (shot)
				shot.execute
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
