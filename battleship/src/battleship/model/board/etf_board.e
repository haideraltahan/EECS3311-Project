note
	description: "Chess board of varying sizes."
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_BOARD
inherit
	ANY
		redefine out end

create
	make, make_empty

feature {NONE} -- create
	make_empty
		do
			size := 0
			create implementation.make_filled (create {ETF_SQUARE}.make ('_'), size, size)
			create history.make
			create Ships.make (size)
		end
	make(a_size, s_size: INTEGER)
			-- Initialization for `Current'.
		do
			size := a_size
			create implementation.make_filled (create {ETF_SQUARE}.make ('_'), size, size)
			create history.make
			create Ships.make (s_size)
		end
feature -- random generators

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

feature {ETF_ACTIONS} -- implementation
	implementation: ARRAY2[ETF_SQUARE]
		-- implementation
	row_indices : ARRAY[CHARACTER]
		once
			Result := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'>>
		end
	history: ETF_HISTORY
	Ships : ARRAYED_LIST[ETF_SHIP]

feature -- utilities

	generate_ships (is_debug_mode: BOOLEAN; board_size: INTEGER; num_ships: INTEGER): ARRAYED_LIST[ETF_SHIP]
			-- places the ships on the board
			-- either deterministicly random or completely random depending on debug mode
		local
			c,r : INTEGER
			d: BOOLEAN
			gen: RANDOM_GENERATOR
			new_ship: ETF_SHIP
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

				new_ship := create {ETF_SHIP}.make (size, r, c,d)

				if not collide_with (Result, new_ship) then
					-- If the generated ship does not collide with
					-- ones that have been generated, then
					-- add it to the set.
					Result.extend (new_ship)
					size := size - 1
				end
				gen.forth
			end
		ensure
			-- not sure how to best check this
		end

	collide_with_each_other (ship1, ship2: ETF_SHIP): BOOLEAN
				-- Does `ship1' collide with `ship2'?
			local
				ship1_head_row, ship1_head_col, ship1_tail_row, ship1_tail_col: INTEGER
				ship2_head_row, ship2_head_col, ship2_tail_row, ship2_tail_col: INTEGER
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

					Result :=
						ship1_tail_col <= ship2_head_col and then
 						ship1_head_col >= ship2_tail_col and then
 						ship1_tail_row <= ship2_head_row and then
 						ship1_head_row >= ship2_tail_row
			end

	collide_with (existing_ships: ARRAYED_LIST[ETF_SHIP];
		new_ship: ETF_SHIP): BOOLEAN
				-- Does `new_ship' collide with the set of `existing_ships'?
			do
					across
						existing_ships as existing_ship
					loop
						Result := Result or collide_with_each_other (new_ship, existing_ship.item)
					end
			ensure
				Result =
					across existing_ships as existing_ship
					some
						collide_with_each_other (new_ship, existing_ship.item)
					end
			end

feature  -- game started
	size: INTEGER
		-- size of board

    started: BOOLEAN
    	-- has the game started?

    set_started
    	do
        	started := True
    	end

feature -- positions
    move_king(a_square: ETF_SQUARE)
    	do
    --		implementation.put ('_', king_position.x, king_position.y)
    	--	implementation.put ('K', a_square.x, a_square.y)
		--	king_position := a_square
    	end

    move_bishop(a_square: ETF_SQUARE)
    	do
    		-- To do
    	end

feature -- out

    board_out: STRING
		-- Return string representation of current game.
		-- You may reuse this routine.
	local
		fi: FORMAT_INTEGER
	do
		create fi.make (2)
		create Result.make_from_string ("%N   ")
		across 1 |..| implementation.width as i loop Result.append(" " + fi.formatted (i.item)) end
		across 1 |..| implementation.width as i loop
			Result.append("%N  "+ row_indices[i.item].out)
			across 1 |..| implementation.height as j loop
				Result.append ("  " + implementation[i.item,j.item].out)
			end
		end
	end

    out: STRING
			-- representation of board
		do
			Result := ""
			if started then
				Result := board_out
			end
		end
end
