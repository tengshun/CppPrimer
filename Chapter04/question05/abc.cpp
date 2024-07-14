#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calor;
};


int main(){
    CandyBar snack{"Mocha Munch", 2.3, 350};
    cout << snack.brand << endl 
    << snack.weight << endl 
    << snack.calor << endl;
}