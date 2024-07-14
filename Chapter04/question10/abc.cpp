#include <iostream>

int main(){
    using std:: cout;
    using std::cin;
    double a, b, c;
    cout << "Enter three double: ";
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "average: " << (a + b + c) / 3;
}