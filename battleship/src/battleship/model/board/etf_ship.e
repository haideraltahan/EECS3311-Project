note
	description: "Summary description for {ETF_SHIP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SHIP

create
	make

feature -- constructor
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


end
