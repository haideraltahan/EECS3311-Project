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
			old_position := board
			position := new_board
		end

feature -- queries
	old_position: ETF_BOARD
	position: ETF_BOARD

feature -- commands

	execute
		do
				-- To Do
		end

	undo
		do

				-- To Do
		end

	redo
		do
			-- To Do
		end
end
