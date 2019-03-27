note
	description: "[
		{SHIP_CANNON} is a utility class that is used for
		firing shots or bombs. It keeps track of the game's
		current scores as well.
	]"
	author: "Yunho Nam"
	date: "$Date$"
	revision: "$Revision$"

class
	SHIP_CANNON

create
	make,
	make_empty

feature {NONE} -- attributes

	bombs_spent_count, shots_spent_count, bombs_limit, shots_limit : INTEGER
	current_score, score_limit: INTEGER
	hit_coordinates : ARRAY [TUPLE[row: INTEGER_32; column: INTEGER_32]]

feature -- constructors

	make_empty
		do
			create hit_coordinates.make_empty
		end

	make (avail_bombs, avail_shots, avail_score: INTEGER)
		do
			create hit_coordinates.make_empty
			current_score := 0
			bombs_spent_count := 0
			shots_spent_count := 0
			bombs_limit := avail_bombs
			shots_limit := avail_shots
			score_limit := avail_score
		end

feature	-- operations

	fire_easy (coordinate: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if shot misses.
			-- Returns [0, 0] if shot hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-2] if the coordinate is invalid.
			-- Returns [-3] if there are no shots remaining.
		local
			sunk_ship_size : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty

			if shots_spent_count = 8 then	-- shots maxed out
				Result.force (-3, 1)
			elseif coordinate.row > 4 or coordinate.col > 4  then	-- invalid coordinate
				Result.force (-2, 1)
			elseif hit_coordinates.has (coordinate) then -- coordinate's already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				shots_spent_count := shots_spent_count + 1
				sunk_ship_size := ship_manager.fire (coordinate)
				hit_coordinates.force (coordinate, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate) then -- shot hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate.row, coordinate.col)
				else	-- shot misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate.row, coordinate.col)
				end

				if sunk_ship_size > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size, 4)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 8 and
									bombs_spent_count = 2) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	fire_medium (coordinate: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if shot misses.
			-- Returns [0, 0] if shot hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-2] if there are no shots remaining.
			-- Returns [-3] if the coordinate is invalid.
		local
			sunk_ship_size : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty

			if shots_spent_count = 16 then	-- shots maxed out
				Result.force (-3, 1)
			elseif coordinate.row > 6 or coordinate.col > 6  then	-- invalid coordinate
				Result.force (-2, 1)
			elseif hit_coordinates.has (coordinate) then -- coordinate's already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				shots_spent_count := shots_spent_count + 1
				sunk_ship_size := ship_manager.fire (coordinate)
				hit_coordinates.force (coordinate, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate) then -- shot hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate.row, coordinate.col)
				else	-- shot misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate.row, coordinate.col)
				end

				if sunk_ship_size > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size, 4)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 16 and
									bombs_spent_count = 3) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	fire_hard (coordinate: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if shot misses.
			-- Returns [0, 0] if shot hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-2] if there are no shots remaining.
			-- Returns [-3] if the coordinate is invalid.
		local
			sunk_ship_size : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty

			if shots_spent_count = 24 then	-- shots maxed out
				Result.force (-3, 1)
			elseif coordinate.row > 8 or coordinate.col > 8  then	-- invalid coordinate
				Result.force (-2, 1)
			elseif hit_coordinates.has (coordinate) then -- coordinate's already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				shots_spent_count := shots_spent_count + 1
				sunk_ship_size := ship_manager.fire (coordinate)
				hit_coordinates.force (coordinate, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate) then -- shot hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate.row, coordinate.col)
				else	-- shot misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate.row, coordinate.col)
				end

				if sunk_ship_size > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size, 4)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 24 and
									bombs_spent_count = 5) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	fire_advanced (coordinate: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if shot misses.
			-- Returns [0, 0] if shot hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-3] if there are no shots remaining.
		local
			sunk_ship_size : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty

			if shots_spent_count = 40 then	-- shots maxed out
				Result.force (-3, 1)
			elseif hit_coordinates.has (coordinate) then -- coordinate's already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				shots_spent_count := shots_spent_count + 1
				sunk_ship_size := ship_manager.fire (coordinate)
				hit_coordinates.force (coordinate, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate) then -- shot hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate.row, coordinate.col)
				else	-- shot misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate.row, coordinate.col)
				end

				if sunk_ship_size > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size, 4)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 40 and
									bombs_spent_count = 7) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	bomb_easy (coordinate1: TUPLE[row: INTEGER_32; col: INTEGER_32]; coordinate2: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if bomb misses.
			-- Returns [0, 0] if bomb hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-2] if the coordinate is invalid.
			-- Returns [-3] if coordinate1 and coordinate2 are not adjacent.
			-- Returns [-4] if there are no bombs remaining.
		local
			sunk_ship_size1, sunk_ship_size2 : INTEGER
			row_diff, col_diff : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty
			row_diff := coordinate1.row - coordinate2.row
			col_diff := coordinate1.col - coordinate2.col

			if bombs_spent_count = 2 then	-- bombs maxed out
				Result.force (-4, 1)
			elseif row_diff.abs + col_diff.abs /= 1 then -- coordinates not adjacent
				Result.force (-3, 1)
			elseif coordinate1.row > 4 or coordinate1.col > 4 or	-- coordinates invalid
				   coordinate2.row > 4 or coordinate2.col > 4 then
				Result.force (-2, 1)
			elseif hit_coordinates.has (coordinate1) or hit_coordinates.has (coordinate2) then -- coordinates' already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				bombs_spent_count := bombs_spent_count + 1
				sunk_ship_size1 := ship_manager.fire (coordinate1)
				sunk_ship_size2 := ship_manager.fire (coordinate2)
				hit_coordinates.force (coordinate1, hit_coordinates.upper + 1)
				hit_coordinates.force (coordinate2, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate1) then -- coordinate1 hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate1.row, coordinate1.col)
				else	-- coordinate1 misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate1.row, coordinate1.col)
				end

				if ship_manager.ship_in_range (coordinate2) then -- coordinate2 hits a ship
					Result.put (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate2.row, coordinate2.col)
				else	-- coordinate2 misses
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate2.row, coordinate2.col)
				end

				if sunk_ship_size1 > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size1, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 = 0 then	-- coordinate1 did not sink a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 > 0 then	-- coordinate1 sunk a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 5)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 8 and
									bombs_spent_count = 2) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	bomb_medium (coordinate1: TUPLE[row: INTEGER_32; col: INTEGER_32]; coordinate2: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if bomb misses.
			-- Returns [0, 0] if bomb hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-2] if the coordinate is invalid.
			-- Returns [-3] if coordinate1 and coordinate2 are not adjacent.
			-- Returns [-4] if there are no bombs remaining.
		local
			sunk_ship_size1, sunk_ship_size2 : INTEGER
			row_diff, col_diff : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty
			row_diff := coordinate1.row - coordinate2.row
			col_diff := coordinate1.col - coordinate2.col

			if bombs_spent_count = 3 then	-- bombs maxed out
				Result.force (-4, 1)
			elseif row_diff.abs + col_diff.abs /= 1 then -- coordinates not adjacent
				Result.force (-3, 1)
			elseif coordinate1.row > 6 or coordinate1.col > 6 or	-- coordinates invalid
				   coordinate2.row > 6 or coordinate2.col > 6 then
				Result.force (-2, 1)
			elseif hit_coordinates.has (coordinate1) or hit_coordinates.has (coordinate2) then -- coordinates' already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				bombs_spent_count := bombs_spent_count + 1
				sunk_ship_size1 := ship_manager.fire (coordinate1)
				sunk_ship_size2 := ship_manager.fire (coordinate2)
				hit_coordinates.force (coordinate1, hit_coordinates.upper + 1)
				hit_coordinates.force (coordinate2, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate1) then -- coordinate1 hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate1.row, coordinate1.col)
				else	-- coordinate1 misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate1.row, coordinate1.col)
				end

				if ship_manager.ship_in_range (coordinate2) then -- coordinate2 hits a ship
					Result.put (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate2.row, coordinate2.col)
				else	-- coordinate2 misses
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate2.row, coordinate2.col)
				end

				if sunk_ship_size1 > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size1, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 = 0 then	-- coordinate1 did not sink a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 > 0 then	-- coordinate1 sunk a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 5)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 16 and
									bombs_spent_count = 3) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	bomb_hard (coordinate1: TUPLE[row: INTEGER_32; col: INTEGER_32]; coordinate2: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if bomb misses.
			-- Returns [0, 0] if bomb hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-2] if the coordinate is invalid.
			-- Returns [-3] if coordinate1 and coordinate2 are not adjacent.
			-- Returns [-4] if there are no bombs remaining.
		local
			sunk_ship_size1, sunk_ship_size2 : INTEGER
			row_diff, col_diff : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty
			row_diff := coordinate1.row - coordinate2.row
			col_diff := coordinate1.col - coordinate2.col

			if bombs_spent_count = 5 then	-- bombs maxed out
				Result.force (-4, 1)
			elseif row_diff.abs + col_diff.abs /= 1 then -- coordinates not adjacent
				Result.force (-3, 1)
			elseif coordinate1.row > 8 or coordinate1.col > 8 or	-- coordinates invalid
				   coordinate2.row > 8 or coordinate2.col > 8 then
				Result.force (-2, 1)
			elseif hit_coordinates.has (coordinate1) or hit_coordinates.has (coordinate2) then -- coordinates' already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				bombs_spent_count := bombs_spent_count + 1
				sunk_ship_size1 := ship_manager.fire (coordinate1)
				sunk_ship_size2 := ship_manager.fire (coordinate2)
				hit_coordinates.force (coordinate1, hit_coordinates.upper + 1)
				hit_coordinates.force (coordinate2, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate1) then -- coordinate1 hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate1.row, coordinate1.col)
				else	-- coordinate1 misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate1.row, coordinate1.col)
				end

				if ship_manager.ship_in_range (coordinate2) then -- coordinate2 hits a ship
					Result.put (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate2.row, coordinate2.col)
				else	-- coordinate2 misses
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate2.row, coordinate2.col)
				end

				if sunk_ship_size1 > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size1, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 = 0 then	-- coordinate1 did not sink a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 > 0 then	-- coordinate1 sunk a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 5)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 24 and
									bombs_spent_count = 5) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

	bomb_advanced (coordinate1: TUPLE[row: INTEGER_32; col: INTEGER_32]; coordinate2: TUPLE[row: INTEGER_32; col: INTEGER_32];
				board: ARRAY2 [SHIP_ALPHABET]; ship_manager : SHIP_MANAGER): ARRAY[INTEGER]
			-- Attempts to fire on a coordinate.
			-- Returns [0, _, _, _, _] if ship sinks, fourth item is ship's size.
			-- Returns [0, _, 2] if game is lost.
			-- Returns [0, _, 1] if game is won.
			-- Returns [0, _, 0] if game is ongoing
			-- Returns [0, 1] if bomb misses.
			-- Returns [0, 0] if bomb hits.
			-- Returns [0] if the shot can be fired.
			-- Returns [-1] if the coordinate's already been hit.
			-- Returns [-3] if coordinate1 and coordinate2 are not adjacent.
			-- Returns [-4] if there are no bombs remaining.
		local
			sunk_ship_size1, sunk_ship_size2 : INTEGER
			row_diff, col_diff : INTEGER
		do
			hit_coordinates.compare_objects
			create Result.make_empty
			row_diff := coordinate1.row - coordinate2.row
			col_diff := coordinate1.col - coordinate2.col

			if bombs_spent_count = 7 then	-- bombs maxed out
				Result.force (-4, 1)
			elseif row_diff.abs + col_diff.abs /= 1 then -- coordinates not adjacent
				Result.force (-3, 1)
			elseif hit_coordinates.has (coordinate1) or hit_coordinates.has (coordinate2) then -- coordinates' already been hit
				Result.force (-1, 1)
			else
				Result.force (0, 1)
				bombs_spent_count := bombs_spent_count + 1
				sunk_ship_size1 := ship_manager.fire (coordinate1)
				sunk_ship_size2 := ship_manager.fire (coordinate2)
				hit_coordinates.force (coordinate1, hit_coordinates.upper + 1)
				hit_coordinates.force (coordinate2, hit_coordinates.upper + 1)

				if ship_manager.ship_in_range (coordinate1) then -- coordinate1 hits a ship
					Result.force (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate1.row, coordinate1.col)
				else	-- coordinate1 misses
					Result.force (0, 2)
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate1.row, coordinate1.col)
				end

				if ship_manager.ship_in_range (coordinate2) then -- coordinate2 hits a ship
					Result.put (1, 2)
					board.put (create {SHIP_ALPHABET}.make ('X'), coordinate2.row, coordinate2.col)
				else	-- coordinate2 misses
					board.put (create {SHIP_ALPHABET}.make ('O'), coordinate2.row, coordinate2.col)
				end

				if sunk_ship_size1 > 0 then	-- a ship was sunk
					Result.force (sunk_ship_size1, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 = 0 then	-- coordinate1 did not sink a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 4)
					current_score := ship_manager.current_score
				end

				if sunk_ship_size2 > 0 and sunk_ship_size1 > 0 then	-- coordinate1 sunk a ship and coordinate2 sunk a ship
					Result.force (sunk_ship_size2, 5)
					current_score := ship_manager.current_score
				end

				if current_score = score_limit or
					(shots_spent_count = 40 and
									bombs_spent_count = 7) then	-- game is over
					if current_score = score_limit then	-- game win
						Result.force (1, 3)
					else	-- game lost
						Result.force (2, 3)
					end
				else	-- game is ongoing
					Result.force (0, 3)
				end
			end
		end

feature -- queries

	hit_landed: BOOLEAN
		do
			Result := hit_coordinates.count > 0
		end

	score: INTEGER
		do
			Result := current_score
		end

	max_score: INTEGER
		do
			Result := score_limit
		end

	bombs_spent: INTEGER
		do
			Result := bombs_spent_count
		end

	max_bombs: INTEGER
		do
			Result := bombs_limit
		end

	shots_spent: INTEGER
		do
			Result := shots_spent_count
		end

	max_shots: INTEGER
		do
			Result := shots_limit
		end

invariant
	bombs_spent_does_not_exceed_limit:
		bombs_spent_count <= bombs_limit
	shots_spent_does_not_exceed_limit:
		shots_spent_count <= shots_limit
	current_score_does_not_exceed_limit:
		current_score <= score_limit

end
