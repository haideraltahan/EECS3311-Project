note
	description: "Summary description for {ETF_ACTIONS_NEW_GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ACTIONS_NEW_GAME
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

	get_state : TUPLE[oldp:INTEGER; newp: INTEGER]
		do
			Result := [old_position.state, position.state]
		end

	get_state_feedback: TUPLE[oldp:STRING; newp: STRING]
		do
			Result := [old_position.state_feedback, position.state_feedback]
		end
end
