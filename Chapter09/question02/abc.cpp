#include <iostream>
using std::string;
const int Arsize = 10;
void strcount(const string str);
int main(){
    using namespace std;
    string input;
    cout << "Enter a line:\n";
    cin >> input;
    while (input.compare(""))
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin >> input;
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str){
    using namespace std;
    static int total = 0;
    int count = str.length();
    cout << "\"" << str << "\"contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}