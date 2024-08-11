#include <iostream>

using namespace std;

template <typename T>
T largest(T arr[]);

int main(){
    int arr1[]{4, 1, 8, 0, 3};
    cout << largest(arr1) << endl;
    double arr2[]{4.1, 1, 8, 30.5, 3};
    cout << largest(arr2) << endl;
    return 0;
}

template <typename T>
T largest(T arr[]){
    T max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}