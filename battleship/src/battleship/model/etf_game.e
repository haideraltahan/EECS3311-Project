note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_GAME

inherit
	ANY
		redefine
			out
		end

create {ETF_GAME_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			STATE_COUNTER := 0
			STATE_FEEDBACK := "OK"
			ACTION_FEEDBACK := "Start a new game"
			create BOARD.make_empty
		end

feature -- model attributes
	STATE_COUNTER : INTEGER
	STATE_FEEDBACK : STRING
	ACTION_FEEDBACK : STRING
	BOARD : ETF_BOARD

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			STATE_COUNTER := STATE_COUNTER + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("state ")
			Result.append (STATE_COUNTER.out)
			Result.append (" ")
			Result.append (STATE_FEEDBACK.out)
			Result.append (" -> ")
			Result.append (ACTION_FEEDBACK.out)
		end

end




