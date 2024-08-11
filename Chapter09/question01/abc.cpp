#include <iostream>
#include <cstring>
using namespace std;
#include "golf.h"

int main() {
    golf g;
    int ret;
    ret = setgolf(g);
    if (ret == 0)
    {
        cout << "ERROR!" << endl;
        exit(2);
    }
    cout << "----showgolf: " << endl;
    showgolf(g);
    cout << "----setgolf: " << endl;
    setgolf(g, "zhangsan", 5);
    showgolf(g);
    cout << "----handicap: " << endl;
    handicap(g, 10);
    showgolf(g);
    return 0;
}

