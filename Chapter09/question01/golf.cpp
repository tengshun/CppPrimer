#include <iostream>;
#include <cstring>
using namespace std;
#include "golf.h"

void setgolf(golf & g, char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    cout << "-------------------------------------- " << endl;
    int ret;
    cout << "Enter name: " << endl;
    if (cin.get(g.fullname, Len))
    {
        ret = 1;
    } else {
        ret = 0;
    }
    cout << "Enter handicap: " << endl;
    cin >> g.handicap;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g) {
    cout << g.fullname << endl;
    cout << g.handicap << endl;
}