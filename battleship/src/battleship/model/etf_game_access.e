note
	description: "Singleton access to the default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	ETF_GAME_ACCESS

feature
	m: ETF_GAME
		once
			create Result.make
		end

invariant
	m = m
end




