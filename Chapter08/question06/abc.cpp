#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[], int n);

template<> char * maxn(char *arr[], int n);

int main(){
    int arr1[]{4, 1, 8, 0, 3, 7};
    cout << maxn(arr1, 6) << endl;
    double arr2[]{4.1, 1, 8, 30.5};
    cout << maxn(arr2, 4) << endl;
    char *arr[]{"abc1", "abc2", "abc3", "adbdef4", "abc5"};
    cout << maxn(arr, 5) << endl;
    return 0;
}

template <typename T>
T maxn(T arr[], int n){
    T max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}

template<> char * maxn(char *arr[], int n){
    char *q = arr[0];
    int a = strlen(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if(strlen(arr[i]) > a) {
            a = strlen(arr[i]);
            q = arr[i];
        }
    }
    return q;
}