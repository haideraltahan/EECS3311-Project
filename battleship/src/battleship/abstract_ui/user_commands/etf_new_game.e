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
    	do
			-- perform some update on the model state

			if model.BOARD.game_status ~ 0 then
				model.board.set_message_state("Game already started")
				model.set_start_state
				model.undo_check_true
			else
				model.new_game (level.as_integer_32, FALSE)
				model.set_start_state
			end

			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
