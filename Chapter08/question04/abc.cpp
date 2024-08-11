#include <iostream>
using namespace std;
#include <cstring>
struct stringy{
    char *str;
    int ct;
};
void set(stringy & beany, char *p);
void show(const stringy & beany, int n = 1);
void show(const char *p, int n = 1);

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & beany, char *p){
    int len = strlen(p);
    char *q = new char[len];
    strcpy(q, p);
    beany.str = q;
    beany.ct = len;
}

void show(const stringy & beany, int n){
    for (int i = 0; i < n; i++)
    {
        cout << beany.str << endl;
    }
    
}

void show(const char *p, int n){
    for (int i = 0; i < n; i++)
    {
        cout << p << endl;
    }
}