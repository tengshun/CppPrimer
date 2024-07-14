#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string com;
    double d;
    int w;
};


int main(){
    Pizza *pz = new Pizza;
    cout << "Please enter d: ";
    cin >> pz->d;
    cout << "Please enter com: ";
    cin >> pz->com;
    cout << "Please enter w: ";
    cin >> pz->w;
    cout << "com: " << pz->com << " " << "d: " << pz->d << " " << "w: " << pz->w; 
    delete pz;
    return 0;
}