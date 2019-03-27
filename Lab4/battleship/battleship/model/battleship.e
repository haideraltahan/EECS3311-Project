note
	description: "A business model of battleship game."
	author: "Yunho Nam"
	date: "$Date$"
	revision: "$Revision$"

class
	BATTLESHIP

inherit
	ARGUMENTS_32
		redefine
			out
		end

create {BATTLESHIP_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			msg1 := "OK"
			msg2 := "Start a new game"
			create game_state.make_empty
			create debug_game.make_empty
			create normal_game.make (1)
			create ship_manager.make_empty
			create cannon.make_empty
			is_game_on := False
			init := False
			current_board := debug_game.board1
			state := 0
			current_level := 0
			total_score_debug := 0
			total_score_max_debug := 0
			total_score_normal := 0
			total_score_max_normal := 0
			debug_count := 0
			normal_count := 0
		end

feature {NONE} -- model attributes

	msg1, msg2, game_state : STRING
	current_game: BOOLEAN -- True = normal; False = debug
	state, current_level : INTEGER
	total_score_debug, total_score_max_debug, total_score_normal, total_score_max_normal : INTEGER
	debug_game : DEBUG_GAME
	normal_game : NORMAL_GAME
	is_game_on, init : BOOLEAN	-- init checks if a game has been started yet
	current_board : ARRAY2 [SHIP_ALPHABET]
	ship_manager : SHIP_MANAGER
	cannon : SHIP_CANNON
	debug_count, normal_count : INTEGER

feature -- model operations

	normal (level: INTEGER_64)
			-- Sets up the game in normal mode.
		local
			new_ships : ARRAYED_LIST [TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]]
		do
			init := True
			state := state + 1

			if not (is_game_on) then
				normal_count := normal_count + 1
				current_game := True
				is_game_on := True
				msg1 := "OK"
				msg2 := "Fire Away!"
				create normal_game.make (level)
				current_board := normal_game.board

				if level = 13 then	-- easy level
					new_ships := debug_game.generate_ships (True, 4, 2)
					ship_manager.make (new_ships)
					cannon.make (2, 8, ship_manager.total_score)
					current_level := 1
				elseif level = 14 then	-- medium level
					new_ships := debug_game.generate_ships (True, 6, 3)
					ship_manager.make (new_ships)
					cannon.make (3, 16, ship_manager.total_score)
					current_level := 2
				elseif level = 15 then	-- hard level
					new_ships := debug_game.generate_ships (True, 8, 5)
					ship_manager.make (new_ships)
					cannon.make (5, 24, ship_manager.total_score)
					current_level := 3
				elseif level = 16 then	-- advanced level
					new_ships := debug_game.generate_ships (True, 12, 7)
					ship_manager.make (new_ships)
					cannon.make (7, 40, ship_manager.total_score)
					current_level := 4
				end
				total_score_max_normal := total_score_max_normal + ship_manager.total_score
			else
				msg1 := "Game already started"
				if cannon.hit_landed then
					msg2 := "Keep Firing!"
				else
					msg2 := "Fire Away!"
				end
			end

			if current_game then
				game_state := normal_game.out
			else
				game_state := debug_game.debug_out (current_level.as_integer_32)
			end
		end

	debug_test (level: INTEGER_64)
			-- Sets up the game in debugging mode.
		local
			new_ships : ARRAYED_LIST [TUPLE [size: INTEGER_32; row: INTEGER_32; col: INTEGER_32; dir: BOOLEAN]]
		do
			init := True
			state := state + 1

			if not (is_game_on) then
				debug_game.reset
				debug_count := debug_count + 1
				current_game := False
				is_game_on := True
				msg1 := "OK"
				msg2 := "Fire Away!"
				if level = 13 then	-- easy level
					current_board := debug_game.board1
					new_ships := debug_game.generate_ships (True, 4, 2)
					place_new_ships (current_board, new_ships)
					ship_manager.make (new_ships)
					cannon.make (2, 8, ship_manager.total_score)
					current_level := 1
				elseif level = 14 then	-- medium level
					current_board := debug_game.board2
					new_ships := debug_game.generate_ships (True, 6, 3)
					place_new_ships (current_board, new_ships)
					ship_manager.make (new_ships)
					cannon.make (3, 16, ship_manager.total_score)
					current_level := 2
				elseif level = 15 then	-- hard level
					current_board := debug_game.board3
					new_ships := debug_game.generate_ships (True, 8, 5)
					place_new_ships (current_board, new_ships)
					ship_manager.make (new_ships)
					cannon.make (5, 24, ship_manager.total_score)
					current_level := 3
				elseif level = 16 then	-- advanced level
					current_board := debug_game.board4
					new_ships := debug_game.generate_ships (True, 12, 7)
					place_new_ships (current_board, new_ships)
					ship_manager.make (new_ships)
					cannon.make (7, 40, ship_manager.total_score)
					current_level := 4
				end
				total_score_max_debug := total_score_max_debug + ship_manager.total_score
			else
				msg1 := "Game already started"
				if cannon.hit_landed then
					msg2 := "Keep Firing!"
				else
					msg2 := "Fire Away!"
				end
			end

			if current_game then
				game_state := normal_game.out
			else
				game_state := debug_game.debug_out (current_level.as_integer_32)
			end
		end

	fire (coordinate: TUPLE[row: INTEGER_64; col: INTEGER_64])
			-- Attempts to fire at coordinate.
		local
			fire_results : ARRAY[INTEGER]
			messages: ARRAY[STRING]
			temp : TUPLE[row: INTEGER_32; col: INTEGER_32]
			str_temp : STRING
		do
			state := state + 1
			create messages.make_empty
			if not (is_game_on) then
				messages.force ("Game not started", 1)
				messages.force ("Start a new game", 2)
			else
				create fire_results.make_empty
				create temp.default_create
				temp.row := coordinate.row.as_integer_32
				temp.col := coordinate.col.as_integer_32

				if current_level = 1 then
					fire_results := cannon.fire_easy (temp, current_board, ship_manager)
				elseif current_level = 2 then
					fire_results := cannon.fire_medium (temp, current_board, ship_manager)
				elseif current_level = 3 then
					fire_results := cannon.fire_hard (temp, current_board, ship_manager)
				elseif current_level = 4 then
					fire_results := cannon.fire_advanced (temp, current_board, ship_manager)
				end

				if fire_results[1] = -3 then
					messages.force ("No shots remaining", 1)
					messages.force ("Keep Firing!", 2)
				elseif fire_results[1] = -2 then
					messages.force ("Invalid coordinate", 1)
					if cannon.hit_landed then
						messages.force ("Keep Firing!", 2)
					else
						messages.force ("Fire Away!", 2)
					end
				elseif fire_results[1] = -1 then
					messages.force ("Already fired there", 1)
					messages.force ("Keep Firing!", 2)
				elseif fire_results[1] = 0 then
					messages.force ("OK", 1)

					if fire_results[2] = 1 then
						messages.force ("Hit!", 2)
					else
						messages.force ("Miss!", 2)
					end
					messages.force ("Keep Firing!", 3)

					if fire_results[3] = 1 then
						is_game_on := False
						messages.put ("You Win!", 3)
					end

					if fire_results[3] = 2 then
						is_game_on := False
						messages.put ("Game Over!", 3)
					end

					if fire_results.count = 4 then
						create str_temp.make_empty
						str_temp.append (fire_results[4].out)
						str_temp.append ("x1 ship sunk!")
						messages.put (str_temp, 2)
						if current_game then
							total_score_normal := total_score_normal + fire_results[4]
						else
							total_score_debug := total_score_debug + fire_results[4]
						end
					end
				end
			end

			if messages.count = 2 then
				msg1 := messages[1]
				msg2 := messages[2]
			end

			if messages.count = 3 then
				msg1 := messages[1]
				msg2 := messages[2]
				msg2.append (" ")
				msg2.append (messages[3])
			end

			if current_game then
				game_state := normal_game.out
			else
				game_state := debug_game.debug_out (current_level.as_integer_32)
			end
		end

	bomb(coordinate1: TUPLE[row: INTEGER_64; col: INTEGER_64] ; coordinate2: TUPLE[row: INTEGER_64; col: INTEGER_64])
			-- Attempts to bomb a coordinate.
		local
			bomb_results : ARRAY[INTEGER]
			str_temp : STRING
			temp : INTEGER
			temp1, temp2 : TUPLE[row: INTEGER; col: INTEGER]
			messages: ARRAY[STRING]
		do
			state := state + 1
			create messages.make_empty
			create bomb_results.make_empty
			if not (is_game_on) then
				messages.force ("Game not started", 1)
				messages.force ("Start a new game", 2)
			else
				create temp1.default_create
				create temp2.default_create
				temp1.row := coordinate1.row.as_integer_32
				temp1.col := coordinate1.col.as_integer_32
				temp2.row := coordinate2.row.as_integer_32
				temp2.col := coordinate2.col.as_integer_32

				if current_level = 1 then
					bomb_results := cannon.bomb_easy (temp1, temp2, current_board, ship_manager)
				elseif current_level = 2 then
					bomb_results := cannon.bomb_medium (temp1, temp2, current_board, ship_manager)
				elseif current_level = 3 then
					bomb_results := cannon.bomb_hard (temp1, temp2, current_board, ship_manager)
				elseif current_level = 4 then
					bomb_results := cannon.bomb_advanced (temp1, temp2, current_board, ship_manager)
				end

				if bomb_results[1] = -4 then
					messages.force ("No bombs remaining", 1)
					messages.force ("Keep Firing!", 2)
				elseif bomb_results[1] = -3 then
					messages.force ("Bomb coordinates must be adjacent", 1)
					if cannon.hit_landed then
						messages.force ("Keep Firing!", 2)
					else
						messages.force ("Fire Away!", 2)
					end
				elseif bomb_results[1] = -2 then
					messages.force ("Invalid coordinate", 1)
					if cannon.hit_landed then
						messages.force ("Keep Firing!", 2)
					else
						messages.force ("Fire Away!", 2)
					end
				elseif bomb_results[1] = -1 then
					messages.force ("Already fired there", 1)
					messages.force ("Keep Firing!", 2)
				elseif bomb_results[1] = 0 then
					messages.force ("OK", 1)

					if bomb_results[2] = 1 then
						messages.force ("Hit!", 2)
					else
						messages.force ("Miss!", 2)
					end
					messages.force ("Keep Firing!", 3)

					if bomb_results[3] = 1 then
						is_game_on := False
						messages.put ("You Win!", 3)
					end

					if bomb_results[3] = 2 then
						is_game_on := False
						messages.put ("Game Over!", 3)
					end

					if bomb_results.count = 4 then
						create str_temp.make_empty
						str_temp.append (bomb_results[4].out)
						str_temp.append ("x1 ship sunk!")
						messages.put (str_temp, 2)
						if current_game then
							total_score_normal := total_score_normal + bomb_results[4]
						else
							total_score_debug := total_score_debug + bomb_results[4]
						end
					end

					if bomb_results.count = 5 then
						-- sort bomb_results
						if bomb_results[4] < bomb_results[5] then
							temp := bomb_results[4]
							bomb_results[4] := bomb_results[5]
							bomb_results[5] := temp
						end
						create str_temp.make_empty
						str_temp.append (bomb_results[4].out)
						str_temp.append ("x1 and ")
						str_temp.append (bomb_results[5].out)
						str_temp.append ("x1 ships sunk!")
						messages.put (str_temp, 2)
						if current_game then
							total_score_normal := total_score_normal + bomb_results[4] + bomb_results[5]
						else
							total_score_debug := total_score_debug + bomb_results[4] + bomb_results[5]
						end
					end
				end
			end

			if messages.count = 2 then
				msg1 := messages[1]
				msg2 := messages[2]
			end

			if messages.count = 3 then
				msg1 := messages[1]
				msg2 := messages[2]
				msg2.append (" ")
				msg2.append (messages[3])
			end

			if current_game then
				game_state := normal_game.out
			else
				game_state := debug_game.debug_out (current_level.as_integer_32)
			end
		end


	reset
			-- Reset model state.
		do
			make
		end

feature {NONE} -- operation

	place_new_ships(board: ARRAY2[SHIP_ALPHABET]; new_ships: ARRAYED_LIST[TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]])
			-- Place the randomly generated positions of `new_ships' onto the `board'.
			-- Notice that when a ship's row and column are given,
			-- its coordinate starts with (row + 1, col) for a vertical ship,
			-- and starts with (row, col + 1) for a horizontal ship.
		require
			across new_ships.lower |..| new_ships.upper as i all
			across new_ships.lower |..| new_ships.upper as j all
				i.item /= j.item implies not debug_game.collide_with_each_other (new_ships[i.item], new_ships[j.item])
			end
			end
		do
			across
				new_ships as new_ship
			loop
				if new_ship.item.dir then
					-- Vertical ship
					across
						1 |..| new_ship.item.size as i
					loop
						board[new_ship.item.row + i.item, new_ship.item.col] := create {SHIP_ALPHABET}.make ('v')
					end
				else
					-- Horizontal ship
					across
						1 |..| new_ship.item.size as i
					loop
						board[new_ship.item.row, new_ship.item.col + i.item] := create {SHIP_ALPHABET}.make ('h')
					end
				end
			end
		end

feature -- output
	out : STRING
		do
			create Result.make_empty
			Result.append ("  state ")
			Result.append (state.out)
			Result.append (" ")
			Result.append (msg1)
			Result.append (" -> ")
			Result.append (msg2)

			if init then
				Result.append (game_state)
				Result.append ("%N")

				if current_game = False then
					Result.append ("  Current Game (debug): ")
					Result.append (debug_count.out)
				else
					Result.append ("  Current Game: ")
					Result.append (normal_count.out)
				end

				Result.append ("%N")
				Result.append ("  Shots: ")
				Result.append (cannon.shots_spent.out)
				Result.append ("/")
				Result.append (cannon.max_shots.out)
				Result.append ("%N")
				Result.append ("  Bombs: ")
				Result.append (cannon.bombs_spent.out)
				Result.append ("/")
				Result.append (cannon.max_bombs.out)
				Result.append ("%N")
				Result.append ("  Score: ")
				Result.append (cannon.score.out)
				Result.append ("/")
				Result.append (cannon.max_score.out)
				Result.append (" (Total: ")
				if current_game then
					Result.append (total_score_normal.out)
				else
					Result.append (total_score_debug.out)
				end
				Result.append ("/")
				if current_game then
					Result.append (total_score_max_normal.out)
				else
					Result.append (total_score_max_debug.out)
				end
				Result.append (")")
				Result.append ("%N")
				Result.append ("  Ships: ")
				Result.append (ship_manager.sunken_ships.count.out)
				Result.append ("/")
				Result.append (ship_manager.count.out)
				if current_game then
					Result.append (ship_manager.normal_out)
				else
					Result.append (ship_manager.debug_out)
				end
			end
		end

invariant
	total_score_does_not_exceed_limit:
		total_score_debug <= total_score_max_debug and
		total_score_normal <= total_score_max_normal

end




