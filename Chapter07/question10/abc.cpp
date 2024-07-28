#include <iostream>

using namespace std;

double calculate(double d1, double d2, double (*f)(double, double));
double add(double d1, double d2);
double dec(double d1, double d2);

int main(){
    double d1 = 4.2;
    double d2 = 2.2;
    cout << calculate(d1, d2, add) << endl;
    cout << calculate(d1, d2, dec) << endl;
}

double calculate(double d1, double d2, double (*f)(double, double)) {
    return f(d1, d2);
}

double add(double d1, double d2){
    return d1 + d2;
}

double dec(double d1, double d2) {
    return d1 - d2;
}