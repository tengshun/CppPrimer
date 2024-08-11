#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void upper(string & str);

int main(){
    string in;
    cout << "Enter a string (q to quit): " ;
    while (getline(cin, in))
    {
        if (in != "q")
        {
            upper(in);
            cout << in << endl;;
            cout << "Enter a string (q to quit): " ;
        }
        else
        {
            break;
        }
    }
    cout << "Bye.";
    
}

void upper(string & str) {
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
}

