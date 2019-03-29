note
	description: "Summary description for {ETF_SHIP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SHIP
inherit ANY
redefine
	out
end

create
	make, make_empty

feature -- constructor
	make_empty
		do
			size := 0
			row := 0
			col := 0
			dir := FALSE
		end

	make(a_size,a_row,a_col: INTEGER; a_dir:BOOLEAN)
		do
			size := a_size
			row := a_row
			col := a_col
			dir := a_dir
		end

feature -- attributes
	size: INTEGER
	row: INTEGER
	col: INTEGER
	dir: BOOLEAN

feature -- queries
	is_sunk(board: ARRAY2[ETF_SQUARE]) : BOOLEAN
		local
			i:INTEGER
		do
			Result := TRUE
			FROM i:=1
			until i > size
			loop
				if dir then
					if board[row+i,col] /~ create {ETF_SQUARE}.make ('X') then
						Result := FALSE
					end
				else
					if board[row,col+i] /~ create {ETF_SQUARE}.make ('X') then
						Result := FALSE
					end
				end
				i:=i+1
			end
		end

feature -- output
	out: STRING
		do
			create Result.make_from_string (size.out + "x1")
		end
end
