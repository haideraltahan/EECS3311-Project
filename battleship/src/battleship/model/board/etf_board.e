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
			create implementation.make_filled (create {ETF_SQUARE}.make ('_'), 1, 1)
			create Ships.make (1)
			is_debug_mode := FALSE
			MAX_TOTAL_SCORE := 0
			STATE_FEEDBACK := "OK"
			ACTION_FEEDBACK := "Start a new game"
			gen := rand_gen
		end
	make(a_size, s_size, a_shots, a_bombs: INTEGER; a_is_debug_mode: BOOLEAN; a_score, a_max_score: INTEGER; a_gen : RANDOM_GENERATOR)
			-- Initialization for `Current'.
		do
			is_debug_mode := a_is_debug_mode
			gen := a_gen
			create implementation.make_filled (create {ETF_SQUARE}.make ('_'), a_size, a_size)
			generate_ships(s_size)
			if is_debug_mode then
				fill_debug
			end
			total_score := a_score
			max_shots := a_shots
			max_bombs := a_bombs
			max_score := get_max_score
			MAX_TOTAL_SCORE := MAX_TOTAL_SCORE + max_score + a_max_score
			STATE_FEEDBACK := "OK"
			ACTION_FEEDBACK := "Fire Away!"
		end
feature {NONE} -- internal attributes
	rand_gen: RANDOM_GENERATOR
			-- random generator for normal mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_random
		end
	row_indices : ARRAY[CHARACTER]
		once
			Result := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'>>
		end

feature -- attributes
	ships : ARRAYED_LIST[ETF_SHIP]
	is_debug_mode: BOOLEAN
	-- shots
	shots, max_shots : INTEGER
	-- bombs
	bombs, max_bombs : INTEGER
	-- score
	score, max_score : INTEGER
	-- total score
	total_score, max_total_score : INTEGER
	-- feedback messages
	state_feedback, action_feedback : STRING
	-- give up bool
	gave_up : BOOLEAN
	-- random generators
	gen : RANDOM_GENERATOR
	--state number
	state : INTEGER

feature {ETF_ACTIONS} -- implementation
	implementation: ARRAY2[ETF_SQUARE]

feature {NONE} -- utilities
	generate_ships (num_ships: INTEGER)
			-- places the ships on the board
			-- either deterministicly random or completely random depending on debug mode
		local
			size: INTEGER
			c,r : INTEGER
			d: BOOLEAN
			new_ship: ETF_SHIP
		do
			create ships.make (num_ships)
			from
				size := num_ships
			until
				size = 0
			loop

				d := (gen.direction \\ 2 = 1)
				if d then
					c := (gen.column \\ implementation.width) + 1
					r := (gen.row \\ (implementation.height - size)) + 1
				else
					r := (gen.row \\ implementation.height) + 1
					c := (gen.column \\ (implementation.width - size)) + 1
				end

				new_ship := create {ETF_SHIP}.make (size, r, c, d)

				if not collide_with (new_ship) then
					-- If the generated ship does not collide with
					-- ones that have been generated, then
					-- add it to the set.
					ships.extend (new_ship)
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

	collide_with (new_ship: ETF_SHIP): BOOLEAN
				-- Does `new_ship' collide with the set of `existing_ships'?
			do
					across
						ships as existing_ship
					loop
						Result := Result or collide_with_each_other (new_ship, existing_ship.item)
					end
			ensure
				Result =
					across ships as existing_ship
					some
						collide_with_each_other (new_ship, existing_ship.item)
					end
			end

	ship_on_coordinate( coordinate: TUPLE[row: INTEGER_32; column: INTEGER_32]):ETF_SHIP
		local
			r:BOOLEAN
		do
			create Result.make_empty
			across ships as s loop
				if s.item.dir ~ TRUE then
					r := coordinate.row > s.item.row and coordinate.row <= s.item.row + s.item.size and coordinate.column ~ s.item.col
				else
					r := coordinate.column > s.item.col and coordinate.column <= s.item.col + s.item.size and coordinate.row ~ s.item.row
				end

				if r then
					Result := s.item
				end
			end
		end

	fill_debug
		local
			temp : ETF_SHIP
		do
			across 1 |..| implementation.width as i loop
				across 1 |..| implementation.height as j loop
					temp := ship_on_coordinate ([i.item, j.item])
					if temp.size ~ 0 then
						implementation[i.item,j.item] := create {ETF_SQUARE}.make ('_')
					else
						if temp.dir then
							implementation[i.item,j.item] := create {ETF_SQUARE}.make ('v')
						else
							implementation[i.item,j.item] := create {ETF_SQUARE}.make ('h')
						end
					end
				end
			end
		end

	is_ship_located(row, col: INTEGER): BOOLEAN
		do
			if implementation[row, col] ~ create {ETF_SQUARE}.make ('_') then
				Result := FALSE
			ELSE
				Result := TRUE
			end

		end

	check_game_status
		do
			if game_status ~ 2 then
				action_feedback := action_feedback + " You Win!"
			elseif game_status ~ 1 then
				action_feedback := action_feedback + " Game Over!"
			else
				action_feedback := action_feedback + " Keep Firing!"
			end
		end

feature  -- game info
	game_status: INTEGER
		-- 0: Game is RUNNING
		-- 1: Game is LOST
		-- 2: Game is WON
		-- 3: Game has not started
		-- 4: Gave up
		local
			all_ships_sunk: BOOLEAN
		do
			if ships.count ~ 0 then
				Result := 3
			else
				Result := 0
				all_ships_sunk := TRUE
				across ships as s loop
					if not s.item.is_sunk(implementation) then
				    	all_ships_sunk := FALSE
				    end
				end

				if all_ships_sunk then
					Result := 2
				elseif shots ~ max_shots and bombs ~ max_bombs then
					Result := 1
				end

				if gave_up then
					Result := 4
				end
			end
		end

	count_sunk_ships : INTEGER
		do
			Result := 0
			across ships as c loop
				if c.item.is_sunk (implementation) then
					Result := Result + 1
				end
			end
		end

	get_max_score : INTEGER
		local
			i:INTEGER
		do
			Result := 0
			from i:=1
			until i > ships.count
			loop
				Result := Result + i
				i := i + 1
			end
		end

	update_score(i:INTEGER)
		do
			score := score + i
			total_score := total_score + i
		end

	set_message(a_state, a_action : STRING)
		do
			STATE_FEEDBACK := a_state
			ACTION_FEEDBACK := a_action
		end

	set_message_state(a_state:STRING)
		do
			STATE_FEEDBACK := a_state
		end

	give_up
		do
			gave_up := TRUE
		end

	is_hit(row, col:INTEGER):BOOLEAN
		do
			Result := implementation[row, col].is_hit
		end

	distance(coordinate1: TUPLE[row: INTEGER_64; column: INTEGER_64] ; coordinate2: TUPLE[row: INTEGER_64; column: INTEGER_64]):INTEGER
		local
			dx, dy : INTEGER_64
		do
			dx := (coordinate1.row - coordinate2.row)
			dy := (coordinate1.column - coordinate2.column)
			Result := (dx.abs + dy.abs).as_integer_32
		end

	is_adjacent(coordinate1: TUPLE[row: INTEGER_64; column: INTEGER_64] ; coordinate2: TUPLE[row: INTEGER_64; column: INTEGER_64]):BOOLEAN
		do
			if distance(coordinate1, coordinate2) ~ 1 then
				Result := TRUE
			else
				Result := FALSE
			end
		end


	is_valid(coordinate: TUPLE[row: INTEGER_64; column: INTEGER_64]): BOOLEAN
			-- Is this a valid position given borad size
		local
			n: INTEGER
		do
			n := implementation.width
			Result := (1 <= coordinate.row and coordinate.row <= n) and (1 <= coordinate.column and coordinate.column <= n)
		end

	fire(row, col: INTEGER)
		local
			sunk_ships : INTEGER
			temp : ETF_SHIP
		do
			sunk_ships := count_sunk_ships
			if is_ship_located(row, col) then
				implementation[row, col] := create {ETF_SQUARE}.make ('X')
				set_message("OK","Hit!")
			else
				implementation[row, col] := create {ETF_SQUARE}.make ('O')
				set_message("OK","Miss!")
			end
			shots := shots + 1
			if count_sunk_ships > sunk_ships then
				temp := ship_on_coordinate ([row, col])
				if temp.size > 0 then
					action_feedback := temp.out + " ship sunk!"
					update_score(temp.size)
				end
			end
			check_game_status
		end

	bomb(coordinate1: TUPLE[row: INTEGER_64; column: INTEGER_64] ; coordinate2: TUPLE[row: INTEGER_64; column: INTEGER_64])
		local
			sunk_ships : INTEGER
			temp : ETF_SHIP
		do
			sunk_ships := count_sunk_ships
			if not is_ship_located(coordinate1.row.as_integer_32, coordinate1.column.as_integer_32) and not is_ship_located(coordinate2.row.as_integer_32, coordinate2.column.as_integer_32) then
				implementation[coordinate1.row.as_integer_32, coordinate1.column.as_integer_32] := create {ETF_SQUARE}.make ('O')
				implementation[coordinate2.row.as_integer_32, coordinate2.column.as_integer_32] := create {ETF_SQUARE}.make ('O')
				set_message("OK","Miss!")
			else
				if is_ship_located(coordinate1.row.as_integer_32, coordinate1.column.as_integer_32) then
					implementation[coordinate1.row.as_integer_32, coordinate1.column.as_integer_32] := create {ETF_SQUARE}.make ('X')
				else
					implementation[coordinate1.row.as_integer_32, coordinate1.column.as_integer_32] := create {ETF_SQUARE}.make ('O')
				end

				if is_ship_located(coordinate2.row.as_integer_32, coordinate2.column.as_integer_32) then
					implementation[coordinate2.row.as_integer_32, coordinate2.column.as_integer_32] := create {ETF_SQUARE}.make ('X')
				else
					implementation[coordinate2.row.as_integer_32, coordinate2.column.as_integer_32] := create {ETF_SQUARE}.make ('O')
				end
				set_message("OK","Hit!")
			end
			bombs := bombs + 1
			if count_sunk_ships - sunk_ships ~ 1  then
				temp := ship_on_coordinate ([coordinate1.row.as_integer_32, coordinate1.column.as_integer_32])
				if temp.size > 0 then
					action_feedback := temp.out + " ship sunk!"
				else
					temp := ship_on_coordinate ([coordinate2.row.as_integer_32, coordinate2.column.as_integer_32])
					action_feedback := temp.out + " ship sunk!"
				end
				update_score(temp.size)
			elseif count_sunk_ships - sunk_ships ~ 2 then
				temp := ship_on_coordinate ([coordinate1.row.as_integer_32, coordinate1.column.as_integer_32])
				action_feedback :=  temp.out + " and "
				update_score(temp.size)
				temp := ship_on_coordinate ([coordinate2.row.as_integer_32, coordinate2.column.as_integer_32])
				action_feedback := action_feedback + temp.out + " ships sunk!"
				update_score(temp.size)
			end

			check_game_status
		end

		set_state(i: INTEGER)
			do
				state := i
			end



feature -- out
	ships_out: STRING
		local
			i, j:INTEGER
		do
			create Result.make_from_string ("%N")
			if is_debug_mode then
				i := 1
				across ships as c loop
					Result.append ("    " + c.item.size.out)
					Result.append ("x1: ")

					from j := 1
					until j > c.item.size
					loop
						if c.item.dir ~ True then
							Result.append ("[")
							Result.append (row_indices[c.item.row + j].out)
							Result.append (", ")
							Result.append (c.item.col.out)
							Result.append ("]")
							Result.append ("->")
							Result.append (implementation[c.item.row + j,c.item.col].out)
						else
							Result.append ("[")
							Result.append (row_indices[c.item.row].out)
							Result.append (", ")
							Result.append ((c.item.col + j).out)
							Result.append ("]")
							Result.append ("->")
							Result.append (implementation[c.item.row,c.item.col + j].out)
						end
						if j <= c.item.size - 1 then
							Result.append (";")
						end
						j := j + 1
					end

					if i < ships.count then
						Result.append ("%N")
					end
					i := i + 1
				end
			else
				i := 1
				across ships as c loop
					Result.append ("    ")
					Result.append (c.item.size.out)
					Result.append ("x1: ")
					if c.item.is_sunk(implementation) ~ True then
						Result.append ("Sunk")
					else
						Result.append ("Not Sunk")
					end
					if i < ships.count then
						Result.append("%N")
					end
					i := i + 1
				end
			end
		end
    out: STRING
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
end
