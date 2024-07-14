#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char fn[50];
    char ln[50];
    cout << "Enter your first name: ";
    cin >> fn;
    cout << "Enter your last name: ";
    cin >> ln;
    strcat(fn, ",");
    strcat(fn, " ");
    strcat(fn, ln);
    cout << "Here's the information in a single string: " << fn;
    return 0;
}