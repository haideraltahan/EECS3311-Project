note
	description: "[
		Abstract move of Battleship.
		]"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ACTIONS

feature {NONE} -- ETF_GAME implementation

	game: ETF_GAME
			-- access board via singleton
		local
			ma: ETF_GAME_ACCESS
		once
			Result := ma.m
		end

feature {NONE}	-- common operations

	remove_previous_steps(str : STRING) : STRING
		do
			if str.at (1) ~ '(' then
				if str.at (12) ~ ')' then
					str.remove_substring (1,13)
				else
					str.remove_substring (1,12)
				end
			end
			Result := str
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
