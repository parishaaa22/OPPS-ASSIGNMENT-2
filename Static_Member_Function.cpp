#include <iostream>
using namespace std;

class Count {
    static int c;
public:
    Count(){ c++; }
    static void show(){ cout<<"Count="<<c<<endl; }
};

int Count::c=0;

int main(){
    Count a,b,c;
    Count::show();
}
