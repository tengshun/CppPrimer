#include <iostream>
using namespace std;

struct box
{
char maker[40];
float h;
float w;
float l;
float v;
};

void display(box b);
void setv(box *p);

int main(){
    box b = {"tengshun", 1.2, 1.3, 1.4};
    display(b);
    setv(&b);
    display(b);
}

void display(box b) {
    cout << b.maker << endl << b.h << endl << b.w << endl << b.l << endl << b.v << endl;
}

void setv(box *p) {
    p->v = p->h * p->w * p->l;
}