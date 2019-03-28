note
	description: "Summary description for {ETF_ACTIONS_DEBUG_TEST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ACTIONS_DEBUG_TEST

inherit
	ETF_ACTIONS

create
	make

feature -- Initialization

	make(new_board: ETF_BOARD)
		do
			old_position := game.board
			position := new_board
		end

feature -- queries
	old_position: ETF_BOARD
	position: ETF_BOARD

feature -- commands

	execute
		do
			game.set_board (position)
		end

	undo
		do
			game.set_board (old_position)
		end

	redo
		do
			execute
		end
end
