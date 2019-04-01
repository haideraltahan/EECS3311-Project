note
	description: "Business model of the Battleship game."
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
			create last_BOARD.make_empty
			create history.make
		end

feature {NONE} -- random and debug generators

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
	history: ETF_HISTORY [ETF_ACTIONS]
	gave_up : BOOLEAN
	is_custom : BOOLEAN
	last_board : ETF_BOARD

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

			if board.check_debug /~ is_debug_mode or gave_up then
				total_score := 0
				max_total_score := 0
				game_counter := 0
				gave_up := FALSE
			else
				total_score := board.get_total_score
				max_total_score := board.get_max_total_score
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

			if board.check_debug /~ is_debug_mode or gave_up then
				total_score := 0
				max_total_score := 0
				game_counter := 0
				gave_up := FALSE
			else
				total_score := board.get_total_score
				max_total_score := board.get_max_total_score
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

	set_board(a_board: ETF_BOARD)
			-- set current board to a_board
		do
			board := a_board
		end

	set_last_board(a_board: ETF_BOARD)
			-- set previous board to a_board
		do
			last_board := a_board
		end

feature -- queries

	out : STRING
			-- Returns string representation of game state
		do
			create Result.make_from_string ("  ")
			Result.append ("state ")
			Result.append (STATE_COUNTER.out)
			Result.append (" ")
			Result.append (board.get_state_feedback)
			Result.append (" -> ")
			Result.append (board.get_action_feedback)

			if not (BOARD.game_status ~ 3) then
				Result.append (BOARD.out)
				Result.append ("%N  ")

				if BOARD.check_debug then
					Result.append ("Current Game (debug): ")
				else
					Result.append ("Current Game: ")
				end

				Result.append (GAME_COUNTER.out)
				Result.append ("%N  ")
				Result.append ("Shots: ")
				Result.append (BOARD.get_shots.out)
				Result.append ("/")
				Result.append (BOARD.get_max_shots.out)
				Result.append ("%N  ")
				Result.append ("Bombs: ")
				Result.append (BOARD.get_bombs.out)
				Result.append ("/")
				Result.append (BOARD.get_max_bombs.out)
				Result.append ("%N")
				Result.append ("  Score: ")
				Result.append (BOARD.get_score.out)
				Result.append ("/")
				Result.append (BOARD.get_max_score.out)
				Result.append (" (Total: ")
				Result.append (BOARD.get_total_score.out)
				Result.append ("/")
				Result.append (BOARD.get_max_total_score.out)
				Result.append (")")
				Result.append ("%N")
				Result.append ("  Ships: ")
				Result.append (BOARD.count_sunk_ships.out)
				Result.append ("/")
				Result.append (BOARD.ships_count.out)
				Result.append (BOARD.ships_out)
			end
		end
	end





