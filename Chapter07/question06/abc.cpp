#include <iostream>
const int SIZE = 10;
using namespace std;

int Fill_array(double arr[], int n);
void Show_array(double arr[], int n);
int main(){
    double arr[SIZE];
    int n = Fill_array(arr, SIZE);
    Show_array(arr, n);
}
int Fill_array(double arr[], int n){
    double d;
    int i = 0;
    while(cin >> d && i < n){
        arr[i] = d;
        i++;
    }
    if (i == 0)
    {
        return 0;
    }
    else
    {
        return i--;
    }
}
void Show_array(double arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}


