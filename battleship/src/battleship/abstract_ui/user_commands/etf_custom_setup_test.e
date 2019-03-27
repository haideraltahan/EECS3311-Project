note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CUSTOM_SETUP_TEST
inherit 
	ETF_CUSTOM_SETUP_TEST_INTERFACE
		redefine custom_setup_test end
create
	make
feature -- command 
	custom_setup_test(dimension: INTEGER_64 ; ships: INTEGER_64 ; max_shots: INTEGER_64 ; num_bombs: INTEGER_64)
		require else 
			custom_setup_test_precond(dimension, ships, max_shots, num_bombs)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
