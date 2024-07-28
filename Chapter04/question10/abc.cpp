#include <iostream>
using namespace std;

int main(){
    using std:: cout;
    // using std::cin;
    // double a, b, c;
    // cout << "Enter three double: ";
    // cin >> a;
    // cin >> b;
    // cin >> c;
    // cout << "average: " << (a + b + c) / 3;

    double prices[3] = {1.1, 1.2, 1.3};
    for (double &x: prices)
    {
        x = x * 10;
    }

    for (double x: prices)
    {
        cout << x << endl;
    }
    return 0;
}