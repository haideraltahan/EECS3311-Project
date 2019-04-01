note
	description: "Summary description for {ETF_ACTIONS_FIRE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ACTIONS_FIRE

inherit
	ETF_ACTIONS

create
	make

feature -- Initialization

	make(new_board: ETF_BOARD)
		do
			old_position := game.board.deep_twin
			position := new_board
		end

feature {NONE} -- attributes

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

	get_state : TUPLE [oldp:INTEGER; newp: INTEGER]
		do
			Result := [old_position.get_state, position.get_state]
		end

	get_state_feedback: TUPLE [oldp:STRING; newp: STRING]
		do
			Result := [remove_previous_steps(old_position.get_state_feedback), remove_previous_steps(position.get_state_feedback)]
		end

	get_state_action : TUPLE [oldp:STRING; newp: STRING]
		do
			Result := [old_position.get_action_feedback, position.get_action_feedback]
		end

end
