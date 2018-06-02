/*************************************************************************
    > File Name: thread_test.cpp
    > Author: panyi
    > Mail: 525647740@qq.com 
    > Created Time: 六  6/ 2 17:55:00 2018
 ************************************************************************/

#include<iostream>
#include<thread>

using namespace std;

void sleep(long sleep_time){
	chrono::milliseconds dura(sleep_time);
	this_thread::sleep_for(dura);
}

void do_task(){
	unsigned int i = 0;
	for(i = 0 ; i < 100 ;i++){
		sleep(1000);
		cout<<"Hello for "<<i<<endl;
	}//end for i
}


int main(int argc, char *agrv[]){
	thread task_thread(do_task);

	task_thread.join();

	cout<<"main thread end!"<<endl;

	return 0;
}

