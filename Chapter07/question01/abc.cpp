#include <iostream>

using namespace std;
double hm(int x, int y);

int main(){
    int x, y;
    cout << "Enter pairs: " << endl;
    cin >> x >> y;
    while(x !=0 && y != 0){
        cout << "mean: " << hm(x, y) << endl;
        cin >> x >> y;
    }
    return 0;
}

double hm(int x, int y){
    return 2.0 * x * y / (x +y);
}