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
    CandyBar *snack = new CandyBar[3]{{"Mocha Munch", 2.3, 35},
                        {"Mocha Munch", 2.3, 35}, 
                        {"Mocha Munch", 2.3, 35}};

    cout << snack[0].brand << endl 
    << snack[0].weight << endl 
    << snack[0].calor << endl << endl;

    cout << snack[1].brand << endl 
    << snack[1].weight << endl 
    << snack[1].calor << endl << endl;

    cout << snack[2].brand << endl 
    << snack[2].weight << endl 
    << snack[2].calor << endl << endl;
    delete[] snack;
}