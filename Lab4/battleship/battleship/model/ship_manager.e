note
	description: "[
		{SHIP_MANAGER} is used to create, operate on, and maintain all {SHIP}
		objects that will be generated and used for any given Battleship game.
	]"
	author: "Yunho Nam"
	date: "$Date$"
	revision: "$Revision$"

class
	SHIP_MANAGER

create
	make,
	make_empty

feature {NONE} -- attributes

	ships : ARRAY[SHIP]

feature -- constructor

	make_empty
		do
			create ships.make_empty
		end

	make (new_ships: ARRAYED_LIST [TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]])
		local
			i : INTEGER
		do
			create ships.make_empty
			from
				i := 1
			until
				i = new_ships.upper + 1
			loop
				ships.force (create {SHIP}.make (new_ships.at (i)), i)
				i := i + 1
			end
		end

feature -- commands

	fire (coordinate: TUPLE[row: INTEGER_32; col: INTEGER_32]): INTEGER
			-- Fires at coordinate and returns the size of the ship if it is sunk.
		local
			i : INTEGER
		do
			Result := 0
			from
				i := 1
			until
				i = ships.upper + 1
			loop
				if ships[i].is_in_range (coordinate.row, coordinate.col) then	-- matching coordinate found
					ships[i].shot (coordinate.row, coordinate.col)	-- change the ship stat
					if ships[i].is_sunk then
						Result := ships[i].size
					end
					i := ships.upper	-- end loop
				end
				i := i + 1
			end
		end

feature -- queries

	total_size: INTEGER
			-- Returns the sum of all ships' sizes.
		do
			across
				ships as cursor
			loop
				Result := Result + 1
			end
		end

	current_score: INTEGER
			-- Returns the sum of all ships' current scores.
		do
			across
				ships as cursor
			loop
				if cursor.item.is_sunk then
					Result := Result + cursor.item.score
				end
			end
		end

	total_score: INTEGER
			-- Returns the sum of all ships' score limits.
		do
			across
				ships as cursor
			loop
				Result := Result + cursor.item.score_max
			end
		end

	ship_in_range (coordinate: TUPLE[row: INTEGER_32; col: INTEGER_32]): BOOLEAN
			-- Returns True if any existing ship is in range of fire
		local
			i : INTEGER
		do
			Result := False

			from
				i := 1
			until
				i = ships.upper + 1
			loop
				if ships[i].is_in_range (coordinate.row, coordinate.col) then
					Result := True
				end
				i := i + 1
			end
		end

	count: INTEGER
		do
			Result := ships.count
		end

	sunken_ships: ARRAY[INTEGER]
			-- Returns an array of sunken ships' sizes.
		local
			i, j : INTEGER
		do
			create Result.make_empty

			from
				i := 1
				j := 1
			until
				i = ships.upper + 1
			loop
				if ships[i].is_sunk then
					Result.force (ships.count, j)
					j := j + 1
				end
				i := i + 1
			end
		end

	normal_out: STRING
			-- Returns the string representation of the ships in normal games.
		do
			create Result.make_empty

			across
				1 |..| ships.upper as i
			loop
				Result.append ("%N")

				if attached ships[i.item] as cursor then
					if cursor.is_sunk then
						Result.append (cursor.debug_out)
					else
						Result.append (cursor.normal_out)
					end
				end
			end
		end

	debug_out: STRING
			-- Returns the string representation of the ships.
		do
			create Result.make_empty

			across
				1 |..| ships.upper as i
			loop
				Result.append ("%N")

				if attached ships[i.item] as cursor then
					Result.append (cursor.debug_out)
				end
			end
		end

end
