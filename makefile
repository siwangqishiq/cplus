run_shared_ptr:test_shared_ptr
	./test_shared_ptr

test_shared_ptr:shared_ptr.cpp
	g++ -g -Wall -std=c++11 shared_ptr.cpp -o test_shared_ptr

clean:
	rm -f test_shared_ptr
