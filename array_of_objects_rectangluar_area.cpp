#include <iostream>
using namespace std;

class Rect {
    int l,b;
public:
    void set(int x,int y){ l=x; b=y; }
    int area(){ return l*b; }
};

int main() {
    Rect r[2];
    r[0].set(2,3);
    r[1].set(4,5);
    cout<<"Area1="<<r[0].area()<<endl;
    cout<<"Area2="<<r[1].area()<<endl;
}
