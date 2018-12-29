#include "sub.h"
#include <iostream>

using namespace std;

int gRef = 100;

Mod::Mod(){
    cout << "create a mod" << endl;
}

void Mod::doFuck(){
    cout << "Do the Fuck!!" << endl;
}

Mod::~Mod(){
    cout << "destory mod !" << endl;
}