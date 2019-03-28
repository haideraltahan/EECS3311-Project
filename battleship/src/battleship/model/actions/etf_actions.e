note
	description: "[
		Abstract move of a chess piece, 
		e.g. King, Bishop, Rook, Knight etc.
		`directions` must be effected relative to the this piece,
		as well as execute, undo and redo.
		]"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ACTIONS

feature{NONE}

	game: ETF_GAME
			-- access board via singleton
		local
			ma: ETF_GAME_ACCESS
		once
			Result := ma.m
		end

feature -- queries
	valid (a_x, a_y: INTEGER): BOOLEAN
			-- Is this a valid position given borad size
		local
			n: INTEGER
		do
			n := game.board.implementation.width
			Result := (1 <= a_x and a_x <= n) and (1 <= a_y and a_y <= n)
		end

feature -- deferred commands
	execute
		deferred
		end
	undo
		deferred
		end

	redo
		deferred
		end

end
