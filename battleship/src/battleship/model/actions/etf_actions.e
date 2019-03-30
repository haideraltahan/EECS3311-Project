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

	get_state : TUPLE[oldp:INTEGER; newp: INTEGER]
		deferred
		end

	get_state_feedback : TUPLE[oldp:STRING; newp: STRING]
		deferred
		end

	get_state_action : TUPLE[oldp:STRING; newp: STRING]
		deferred
		end
end
