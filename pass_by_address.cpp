#include <iostream>
using namespace std;

class Num {
    int x;
public:
    Num(int v=0){ x=v; }
    Num add(Num *n){ return Num(x+n->x); } 
    void show(){ cout<<x<<endl; }
};

int main() {
    Num n1(5), n2(15), n3;
    n3 = n1.add(&n2);
    n3.show();
}
