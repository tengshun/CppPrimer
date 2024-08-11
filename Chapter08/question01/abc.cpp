#include<iostream>

using namespace std;

void display(char *p);
void display(char *p, int n);
int main() {
    display("abc0");
    display("abc1", 5);
    display("abc2", 2);
    display("abc3", 0);
}

void display(char *p){
    cout << p << endl;
}

void display(char *p, int n){
    static int num = 1;
    if (n == 0)
    {
        return;
    }
    
    for (int i = 0; i < num; i++)
    {
        cout << p << endl;
    }
    num++;
}