#include <iostream>
#include "util.h"
#include "sub.h"

using namespace std;

extern int gRef;

int Util::giveMeMoney(){
    cout << "give me 100 money" <<endl;
    Mod *m = new Mod();
    m->doFuck();
    delete m;

    gRef++;
    cout << "gRef = " << gRef <<  " gRef Address = " << (&gRef) << endl;
    return 100;
}
