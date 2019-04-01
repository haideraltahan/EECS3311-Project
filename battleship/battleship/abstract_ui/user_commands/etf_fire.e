note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_FIRE

inherit
	ETF_FIRE_INTERFACE
		redefine fire end
create
	make

feature -- command

	fire(coordinate: TUPLE[row: INTEGER_64; column: INTEGER_64])
		require else
			fire_precond(coordinate)
		local
			shot : ETF_ACTIONS_FIRE
			new_board : ETF_BOARD
   			did_shoot : BOOLEAN
    	do
			-- perform some update on the model state
			did_shoot := FALSE
			new_board := model.board.deep_twin
			if not (model.board.game_status ~ 0) then
				model.board.set_message("Game not started", "Start a new game")
			elseif not model.board.is_valid(coordinate) then
				if model.get_is_cusom then
					new_board.set_message_state("Invalid coordinate")
				else
					model.board.set_message("Invalid coordinate", "Keep Firing!")
				end
			elseif model.board.get_shots ~ model.board.get_max_shots then
				if model.get_is_cusom then
					new_board.set_message_state("No shots remaining")
				else
					model.board.set_message ("No shots remaining", "Keep Firing!")
				end
			elseif model.board.is_hit(coordinate.row.as_integer_32, coordinate.column.as_integer_32) then
				if model.get_is_cusom then
					new_board.set_message_state("Already fired there")
				else
					model.board.set_message ("Already fired there", "Keep Firing!")
				end
			else
				-- shoot the area
				new_board := model.board.deep_twin
				new_board.fire (coordinate.row.as_integer_32, coordinate.column.as_integer_32)
				new_board.set_state (model.state_counter)
				create shot.make (new_board)
				model.history.extend_history (shot)
				shot.execute
				did_shoot := TRUE
			end

			if model.get_is_cusom and not did_shoot then
				new_board.set_state (model.state_counter.deep_twin)
				create shot.make (new_board)
				model.history.extend_history (shot)
				shot.execute
				did_shoot := FALSE
			end

			if model.board.game_status ~ 2 then
				model.reset_history
			elseif model.board.game_status ~ 1 then
				model.reset_history
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
