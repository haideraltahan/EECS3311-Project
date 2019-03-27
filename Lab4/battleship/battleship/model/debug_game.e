note
	description: "[
		{DEBUG_GAME} class is a representation of the game
		while it is in debug mode. This class is used to
		maintain the boards of different sizes matching
		the level of the game.
		
		This class can only be used by {BATTLESHIP} class.
	]"
	author: "Yunho Nam"
	date: "$Date$"
	revision: "$Revision$"

class
	DEBUG_GAME

create
	make_empty

feature {BATTLESHIP} -- attributes

	board1, board2, board3, board4 : ARRAY2 [SHIP_ALPHABET]

	row_indices: ARRAY [CHARACTER_8]
		attribute
			Result := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'>>
		end

feature {NONE} -- random generators

	rand_gen: RANDOM_GENERATOR
			-- random generator for normal mode
			-- it's important to keep this as an attribute
		attribute
			create Result.make_random
		end

	debug_gen: RANDOM_GENERATOR
			-- deterministic generator for debug mode
			-- it's important to keep this as an attribute
		attribute
			create Result.make_debug
		end

feature {BATTLESHIP} -- constructor

	make_empty
			-- Makes an empty board.
		do
			create board1.make_filled (create {SHIP_ALPHABET}.make ('_'), 4, 4)
			create board2.make_filled (create {SHIP_ALPHABET}.make ('_'), 6, 6)
			create board3.make_filled (create {SHIP_ALPHABET}.make ('_'), 8, 8)
			create board4.make_filled (create {SHIP_ALPHABET}.make ('_'), 12, 12)
		end

feature {BATTLESHIP} -- commands

	reset
			-- Reset all boards.
		do
			board1.fill_with (create {SHIP_ALPHABET}.make ('_'))
			board2.fill_with (create {SHIP_ALPHABET}.make ('_'))
			board3.fill_with (create {SHIP_ALPHABET}.make ('_'))
			board4.fill_with (create {SHIP_ALPHABET}.make ('_'))
		end

feature {BATTLESHIP} -- queries

	debug_out (level: INTEGER): STRING_8
			-- Return string representation of current game.
			-- You may reuse this routine.
		require
			level_is_between_1_and_4: level >= 1 and level <= 4
		local
			fi : FORMAT_INTEGER
			board : ARRAY2 [SHIP_ALPHABET]
		do
			if level = 1 then
				board := board1
			elseif level = 2 then
				board := board2
			elseif level = 3 then
				board := board3
			elseif level = 4 then
				board := board4
			else
				board := board1
			end

			create fi.make (2)
			create Result.make_from_string ("%N   ")
			across
				1 |..| board.width as i
			loop
				Result.append (" " + fi.formatted (i.item))
			end
			across
				1 |..| board.width as i
			loop
				Result.append ("%N  " + row_indices [i.item].out)
				across
					1 |..| board.height as j
				loop
					Result.append ("  " + board [i.item, j.item].out)
				end
			end
		end

feature {BATTLESHIP} -- utilities

	generate_ships (is_debug_mode: BOOLEAN; board_size: INTEGER_32; num_ships: INTEGER_32): ARRAYED_LIST [TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]]
			-- places the ships on the board
			-- either deterministicly random or completely random depending on debug mode
		local
			size: INTEGER_32
			c, r: INTEGER_32
			d: BOOLEAN
			gen: RANDOM_GENERATOR
			new_ship: TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]
		do
			create Result.make (num_ships)
			if is_debug_mode then
				gen := debug_gen
			else
				gen := rand_gen
			end
			from
				size := num_ships
			until
				size = 0
			loop
				d := (gen.direction \\ 2 = 1)
				if d then
					c := (gen.column \\ board_size) + 1
					r := (gen.row \\ (board_size - size)) + 1
				else
					r := (gen.row \\ board_size) + 1
					c := (gen.column \\ (board_size - size)) + 1
				end
				new_ship := [size, r, c, d]
				if not collide_with (Result, new_ship) then
					Result.extend (new_ship)
					size := size - 1
				end
				gen.forth
			end
		end

	collide_with_each_other (ship1, ship2: TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]): BOOLEAN
			-- Does `ship1` collide with `ship2`?
		local
			ship1_head_row, ship1_head_col, ship1_tail_row, ship1_tail_col: INTEGER_32
			ship2_head_row, ship2_head_col, ship2_tail_row, ship2_tail_col: INTEGER_32
		do
			ship1_tail_row := ship1.row
			ship1_tail_col := ship1.col
			if ship1.dir then
				ship1_tail_row := ship1_tail_row + 1
				ship1_head_row := ship1_tail_row + ship1.size - 1
				ship1_head_col := ship1_tail_col
			else
				ship1_tail_col := ship1_tail_col + 1
				ship1_head_col := ship1_tail_col + ship1.size - 1
				ship1_head_row := ship1_tail_row
			end
			ship2_tail_row := ship2.row
			ship2_tail_col := ship2.col
			if ship2.dir then
				ship2_tail_row := ship2_tail_row + 1
				ship2_head_row := ship2_tail_row + ship2.size - 1
				ship2_head_col := ship2_tail_col
			else
				ship2_tail_col := ship2_tail_col + 1
				ship2_head_col := ship2_tail_col + ship2.size - 1
				ship2_head_row := ship2_tail_row
			end
			Result := ship1_tail_col <= ship2_head_col and then ship1_head_col >= ship2_tail_col and then ship1_tail_row <= ship2_head_row and then ship1_head_row >= ship2_tail_row
		end

	collide_with (existing_ships: ARRAYED_LIST [TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]]; new_ship: TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]): BOOLEAN
			-- Does `new_ship` collide with the set of `existing_ships`?
		do
			across
				existing_ships as existing_ship
			loop
				Result := Result or collide_with_each_other (new_ship, existing_ship.item)
			end
		ensure
				Result = across
					existing_ships as existing_ship
				some
					collide_with_each_other (new_ship, existing_ship.item)
				end
		end

end -- class DEBUG_GAME
