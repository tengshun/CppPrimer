#include <iostream>
#include <string>

int main(){
    using namespace std;
    string fn;
    string ln;
    cout << "Enter your first name: ";
    cin >> fn;
    cout << "Enter your last name: ";
    cin >> ln;
    fn = fn + ", " + ln;
    cout << "Here's the information in a single string: " + fn;
    return 0;
}