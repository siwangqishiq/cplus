run_shared_ptr:test_shared_ptr
	./$<

test_shared_ptr:shared_ptr.cpp
	g++ -g -Wall -std=c++11 $^ -o $@

clean:
	rm -f test_shared_ptr
