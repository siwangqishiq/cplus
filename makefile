cc = g++

run_shared_ptr:test_shared_ptr
	./$<

test_shared_ptr:shared_ptr.cpp
	$(cc) -g -Wall -std=c++11 $^ -o $@

test_thread:thread_test.cpp
	$(cc) -g -Wall -std=c++11 $^ -o test_thread -pthread -D_GLIBCXX_USE_NANOSLEEP

.PHONY:
	clean

clean:
	rm -f test_shared_ptr
