#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char fname[50];
    char lname[50];
    char grade;
    int age;
    cout << "What is your first name? ";
    cin.getline(fname, 50);
    cout << "What is your last name? ";
    cin.getline(lname, 50);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lname << " " << fname << endl;
    cout << "Grade: " << char(grade - 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}