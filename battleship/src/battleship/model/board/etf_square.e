note
	description: "The game square position with char"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SQUARE
inherit
	ANY
		redefine out end
	DEBUG_OUTPUT
		redefine out end
create
	make

feature{NONE}
	make(a_char: CHARACTER)
			-- may not be a valid square
		do
			item := a_char
		end

	board: ETF_BOARD
			-- access board via singleton
		local
			ma: ETF_GAME_ACCESS
		once
			Result := ma.m.board
		end
feature
	item: CHARACTER

	is_hit:BOOLEAN
		do
			Result := FALSE
			if item ~ 'O' or item ~ 'X' then
				Result := TRUE
			end
		end

	debug_output: STRING
		do
			Result := out
		end

	out: STRING
			-- Return string representation of alphabet.
		do
			Result := item.out
		end

invariant
	allowable_symbols:
		item = '_' or item = 'h' or item = 'v' or item = 'O' or item = 'X'
end
