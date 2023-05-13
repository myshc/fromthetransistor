all:
	rm -rf obj_dir/
	verilator -Wall -cc hello.v --exe main.cpp
	cd obj_dir; make -j4 -f Vhello.mk; mv Vhello ../
