note
	description: "[
		{NORMAL_GAME} class is a representation of the game
		while it is not in debug mode. This class is used to
		maintain the board of normal game.
		
		This class can only be used by {BATTLESHIP} class.
	]"
	author: "Yunho Nam"
	date: "$Date$"
	revision: "$Revision$"

class
	NORMAL_GAME

inherit
	ANY
		redefine
			out
		end

create
	make

feature {BATTLESHIP} -- attributes

	board : ARRAY2 [SHIP_ALPHABET]

	row_indices: ARRAY [CHARACTER_8]
		attribute
			Result := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'>>
		end

feature {BATTLESHIP} -- constructor

	make (level: INTEGER_64)
			-- Makes an empty board.
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'),1, 1)
			if level = 13 then
				create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 4, 4)
			elseif level = 14 then
				create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 6, 6)
			elseif level = 15 then
				create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 8, 8)
			elseif level = 16 then
				create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 12, 12)
			end
		end

feature {BATTLESHIP} -- queries

	out: STRING
		local
			fi : FORMAT_INTEGER
		do
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

end -- class NORMAL_GAME
