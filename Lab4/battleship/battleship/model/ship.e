note
	description: "[
		{SHIP} is a parsed representation of a ship in Battleship game.
		It parses, contains, and manages every coordinate of a ship.
		This class can only be used by {SHIP_CONTROLLER} class.
	]"
	author: "Yunho Nam"
	date: "$Date$"
	revision: "$Revision$"

class
	SHIP

create
	make

feature {NONE} -- attributes

	ship: ARRAY[TUPLE[row: INTEGER; col: INTEGER; stat: CHARACTER]]

feature {SHIP_MANAGER} -- constructor

	make (ship_param: TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN])
			-- Create a more useful representation of a ship.
		local
			i, j: INTEGER
			temp: TUPLE[INTEGER, INTEGER, CHARACTER]
		do
			create ship.make_empty

			if ship_param.dir then -- ship is vertical
				-- create vertical ship
				from
					i := 1
					j := ship_param.row + 1
				until
					i = ship_param.size + 1
				loop
					create temp.default_create
					temp.put (j, 1)
					temp.put (ship_param.col, 2)
					temp.put ('v', 3)
					ship.force (temp, i)
					i := i + 1
					j := j + 1
				end
			else -- ship is horizontal
				-- create vertical ship
				from
					i := 1
					j := ship_param.col + 1
				until
					i = ship_param.size + 1
				loop
					create temp.default_create
					temp.put (ship_param.row, 1)
					temp.put (j, 2)
					temp.put ('h', 3)
					ship.force (temp, i)
					i := i + 1
					j := j + 1
				end
			end
		end

feature {SHIP_MANAGER} -- commands

	shot (row, col: INTEGER_32)
		-- Indicate that a part of the ship has been shot.
		local
			i : INTEGER
		do
			from
				i := 1
			until
				i = ship.upper + 1
			loop
				if ship[i].row = row and ship[i].col = col then
					ship[i].stat := 'X'
					i := ship.upper		-- end loop after finding coordinate
				end
				i := i + 1
			end
		end

feature {NONE} -- private operations

	convert_num_to_char (num: INTEGER): CHARACTER
		require
			num_in_range: num >= 1 and num <= 12
		do
			if num = 1 then
				result := 'A'
			elseif num = 2 then
				result := 'B'
			elseif num = 3 then
				result := 'C'
			elseif num = 4 then
				result := 'D'
			elseif num = 5 then
				result := 'E'
			elseif num = 6 then
				result := 'F'
			elseif num = 7 then
				result := 'G'
			elseif num = 8 then
				result := 'H'
			elseif num = 9 then
				result := 'I'
			elseif num = 10 then
				result := 'J'
			elseif num = 11 then
				result := 'K'
			elseif num = 12 then
				result := 'L'
			end
		end

feature {SHIP_MANAGER} -- queries

	is_in_range (row, col: INTEGER_32): BOOLEAN
			-- Returns True if the coordinate matches any part of the ship.
		local
			i : INTEGER
		do
			Result := False
			from
				i := 1
			until
				i = ship.upper + 1
			loop
				if ship[i].row = row and ship[i].col = col then
					Result := True
				end
				i := i + 1
			end
		end

	is_sunk: BOOLEAN
			-- Returns True if the ship is sunk, False otherwise.
		local
			i : INTEGER
		do
			Result := True

			from
				i := 1
			until
				i = ship.upper + 1
			loop
				if ship[i].stat /= 'X' then
					Result := False
				end
				i := i + 1
			end
		end

	size: INTEGER
			-- Returns the size of the ship.
		do
			Result := ship.count
		end

	score: INTEGER
			-- Returns the score of the ship.
		local
			i : INTEGER
		do
			from
				i := 1
			until
				i = ship.upper + 1
			loop
				if ship[i].stat = 'X' then
					Result := Result + 1
				end
				i := i + 1
			end
		end

	score_max: INTEGER
			-- Returns the max score of the ship.
		local
			i : INTEGER
		do
			from
				i := 1
			until
				i = ship.upper + 1
			loop
				Result := Result + 1
				i := i + 1
			end
		end

	normal_out: STRING_8
			-- Used for string representation of ships in normal games.
		do
			create Result.make_empty

			Result.append ("    ")
			Result.append (ship.count.out)
			Result.append ("x1: Not Sunk")
		end

	debug_out: STRING_8
			-- String representation of ships.
		local
			i: INTEGER
		do
			create Result.make_empty

			Result.append ("    ")
			Result.append (ship.count.out)
			Result.append ("x1: ")

			from
				i := 1
			until
				i = ship.upper + 1
			loop
				Result.append ("[")
				Result.append (convert_num_to_char (ship[i].row).out)
				if ship[i].col >= 10 then
					Result.append (",")
				else
					Result.append (", ")
				end
				Result.append (ship[i].col.out)
				Result.append ("]->")
				Result.append (ship[i].stat.out)
				if i < ship.upper then
					Result.append (";")
				end
				i := i + 1
			end
		end

end
