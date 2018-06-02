/*************************************************************************
    > File Name: shared_ptr.cpp
    > Author: panyi
    > Mail: 525647740@qq.com 
    > Created Time: 六  6/ 2 09:53:25 2018
 ************************************************************************/

#include<iostream>
#include<memory>
#include<vector>
#include<string>

using namespace std;

class Foo{
	public:
		Foo(const string _s1 , const string _s2):s1(_s1),s2(_s2){
		}
		void show(){
			cout << "s1 = " << s1 << endl;
			cout << "s2 = " << s2 << endl;
		}
	protected:
		string s1;
		string s2;
	
};


int main(int agrc , char *agrv[]){
	Foo foo(string("Hello") , string("Haha"));
	foo.show();

	shared_ptr<Foo> pFoo = make_shared<Foo>(string("你好") , string("世界"));

	pFoo->show();

	return 0;
}

