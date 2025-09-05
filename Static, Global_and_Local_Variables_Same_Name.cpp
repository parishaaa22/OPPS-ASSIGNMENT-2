#include <iostream>
using namespace std;

int x=10; // global

class Test {
public:
    static int x;
};

int Test::x=20;

int main(){
    int x=30; // local
    cout<<"Local="<<x<<endl;
    cout<<"Global="<<::x<<endl;
    cout<<"Static="<<Test::x<<endl;
}
