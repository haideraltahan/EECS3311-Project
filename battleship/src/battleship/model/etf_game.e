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
			create BOARD.make_empty
		end

feature -- model attributes
	STATE_COUNTER, GAME_COUNTER : INTEGER
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

	new_game(level: INTEGER_64; is_debug_mode: BOOLEAN)
			--create new board
		do
			if level ~ 13 then
				-- easy
				create BOARD.make (4, 2, 8, 2, is_debug_mode)
			elseif level ~ 14 then
				-- medium
				create BOARD.make (6, 3, 16, 3, is_debug_mode)
			elseif level ~ 15 then
				-- hard
				create BOARD.make (8, 5, 24, 5, is_debug_mode)
			elseif level ~ 16 then
				-- advanced
				create BOARD.make (12, 7, 40, 7, is_debug_mode)
			end
		end

feature -- actions commands

	set_board(a_BOARD: ETF_BOARD)
		do
			board:=a_board
		end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("state ")
			Result.append (STATE_COUNTER.out)
			Result.append (" ")
			Result.append (board.STATE_FEEDBACK.out)
			Result.append (" -> ")
			Result.append (board.ACTION_FEEDBACK.out)
			if not (BOARD.game_status ~ 3) then
				Result.append (BOARD.out)
				Result.append ("%N  ")
				if BOARD.is_debug_mode then
					Result.append ("Current Game (debug): ")
				else
					Result.append ("Current Game: ")
				end
				Result.append (GAME_COUNTER.out)
				Result.append ("%N  ")
				Result.append ("Shots: ")
				Result.append (BOARD.shots.out)
				Result.append ("/")
				Result.append (BOARD.max_shots.out)
				Result.append ("%N  ")
				Result.append ("Bombs: ")
				Result.append (BOARD.bombs.out)
				Result.append ("/")
				Result.append (BOARD.max_bombs.out)
				Result.append ("%N")
				Result.append ("  Score: ")
				Result.append (BOARD.score.out)
				Result.append ("/")
				Result.append (BOARD.max_score.out)
				Result.append (" (Total: ")
				Result.append (BOARD.TOTAL_SCORE.out)
				Result.append ("/")
				Result.append (BOARD.max_total_score.out)
				Result.append (")")
				Result.append ("%N")
				Result.append ("  Ships: ")
				Result.append (BOARD.count_sunk_ships.out)
				Result.append ("/")
				Result.append (BOARD.ships.count.out)
				Result.append (BOARD.ships_out)
			end
		end
	end





