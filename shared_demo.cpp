/*************************************************************************
    > File Name: shared_demo.cpp
    > Author: siwangqishiq
# mail: 525647740@qq.com
    > Created Time: 日  6/ 3 19:34:57 2018
 ************************************************************************/

#include<iostream>
#include<memory>

using namespace std;

class Type{
	public:
		Type(){
			cout<<"Type create"<<endl;
		}
		int x;
		int y;
		~Type(){
			cout << "Type destory"<<endl;
		}
};

shared_ptr<Type> createType(){
	shared_ptr<Type> p = make_shared<Type>();
	p->x = 100;
	p->y = 200;
	return p;
}

int main(int argc,char *argv[]){
	//Type p;
	shared_ptr<Type> p = createType();
	cout<<" p.x = "<< p->x <<endl;
	cout << "p.y = " << p->y << endl;
	
	shared_ptr<Type> q = p;
	q->x = 400;
	q->y = 500;

	cout<<" p.x = "<< p->x <<endl;
	cout << "p.y = " << p->y << endl;
	
	cout << "endl program" <<endl;	
	return 0;
}


