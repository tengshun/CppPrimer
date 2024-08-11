#include<iostream>

using namespace std;

struct Candy {
    string name;
    double w;
    int num;
};


void set(Candy & ca, string name = "Millennium Munch", double w = 2.85, int n = 350);
void display(const Candy & ca);

int main(){
    Candy ca;
    set(ca, "zhangsan");
    display(ca);
}

void set(Candy & ca, string name, double w, int n){
    ca.name = name;
    ca.w = w;
    ca.num = n;
}

void display(const Candy & ca) {
    cout << ca.name << endl << ca.w << endl << ca.num << endl;
}