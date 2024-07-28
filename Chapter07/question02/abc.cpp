#include <iostream>
using namespace std;

const int SIZE = 10;
void fill(double arr[], int n);
double avg(double arr[], int n);
void display(const double *p, int n);
int main(){
    double arr[10];
    cout << "Enter: " << endl;
    fill(arr, SIZE);
    cout << "avg: " << avg(arr, SIZE) << endl;
    display(arr, SIZE);
}
void fill(double arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
double avg(double arr[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
void display(const double *p, int n){
    for (const double *i = p; i < p + n; i++)
    {
        cout << *i << " ";
    }
}