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
    Pizza pz;
    cout << "Please enter com: ";
    cin >> pz.com;
    cout << "Please enter d: ";
    cin >> pz.d;
    cout << "Please enter w: ";
    cin >> pz.w;

    cout << "com: " << pz.com << " " << "d: " << pz.d << " " << "w: " << pz.w; 
}