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
    	do
			-- perform some update on the model state
			if model.board.shots ~ model.board.max_shots then
				-- no more shots
			elseif model.board.is_hit(coordinate.row.as_integer_32, coordinate.column.as_integer_32) then
				-- area already shot
			else
				-- shoot the area
				new_board := model.board.deep_twin
				new_board.fire (coordinate.row.as_integer_32, coordinate.column.as_integer_32)
				create shot.make (new_board)
				model.history.extend_history ([shot, model.state_counter.deep_twin])
				shot.execute
			end
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
