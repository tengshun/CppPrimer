#include <iostream>
#include <string>

using namespace std;

void f1(){
   cout << "Three blind mice" << endl;
}

void f2(){
    cout << "See how they run\n";
}

int main() {
    f1();
    f1();
    f2();
    f2();
    return 0;
}