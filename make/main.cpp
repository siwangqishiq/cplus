#include <iostream>

#include "sub.h"
#include "util.h"

using namespace std;

extern int gRef;

int main(int argc,char *agrv[]){
    gRef++;
    cout << "gRef = " << gRef <<  " gRef Address = " << (&gRef) << endl;

    Mod mod;
    mod.doFuck();

    Util u;
    u.giveMeMoney();

    cout << "do test end" << endl;
    return 0;
}