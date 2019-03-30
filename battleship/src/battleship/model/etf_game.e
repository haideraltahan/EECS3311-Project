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
			create history.make
		end

	rand_gen: RANDOM_GENERATOR
			-- random generator for normal mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_random
		end

	debug_gen: RANDOM_GENERATOR
			-- deterministic generator for debug mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_debug
		end

	custom_rand_gen: RANDOM_GENERATOR
			-- random generator for normal mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_random
		end

	custom_debug_gen: RANDOM_GENERATOR
			-- deterministic generator for debug mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_debug
		end

feature -- model attributes

	STATE_COUNTER, GAME_COUNTER : INTEGER
	BOARD : ETF_BOARD
	history: ETF_HISTORY
	gave_up : BOOLEAN
	is_custom : BOOLEAN

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

	reset_history
		do
			history.reset
		end

	new_game(level: INTEGER_64; is_debug_mode: BOOLEAN)
			--create new board
		local
			gen : RANDOM_GENERATOR
			total_score, max_total_score : INTEGER
		do
			if is_debug_mode then
				gen := debug_gen
			else
				gen := rand_gen
			end

			if board.is_debug_mode /~ is_debug_mode or gave_up then
				total_score := 0
				max_total_score := 0
				game_counter := 0
				gave_up := FALSE
			else
				total_score := board.total_score
				max_total_score := board.max_total_score
			end

			if level ~ 13 then
				-- easy
				create BOARD.make (4, 2, 8, 2, is_debug_mode, total_score, max_total_score, gen)
			elseif level ~ 14 then
				-- medium
				create BOARD.make (6, 3, 16, 3, is_debug_mode, total_score, max_total_score, gen)
			elseif level ~ 15 then
				-- hard
				create BOARD.make (8, 5, 24, 5, is_debug_mode, total_score, max_total_score, gen)
			elseif level ~ 16 then
				-- advanced
				create BOARD.make (12, 7, 40, 7, is_debug_mode, total_score, max_total_score, gen)
			end

			game_counter := game_counter + 1
			is_custom := False
		end

	custom_game(dimension, ships, max_shots, num_bombs: INTEGER; is_debug_mode: BOOLEAN)
			--create new board
		local
			gen : RANDOM_GENERATOR
			total_score, max_total_score : INTEGER
		do
			if is_debug_mode then
				gen := custom_debug_gen
			else
				gen := custom_rand_gen
			end

			if board.is_debug_mode /~ is_debug_mode or gave_up then
				total_score := 0
				max_total_score := 0
				game_counter := 0
				gave_up := FALSE
			else
				total_score := board.total_score
				max_total_score := board.max_total_score
			end

			create BOARD.make (dimension, ships, max_shots, num_bombs, is_debug_mode, total_score, max_total_score, gen)

			game_counter := game_counter + 1
			is_custom := True
		end

	give_up
		do
			gave_up := TRUE
		end

feature -- queries

	get_is_cusom: BOOLEAN
		do
			Result := is_custom
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





