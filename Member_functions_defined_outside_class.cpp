#include <iostream>
using namespace std;

class Demo {
public:
    void show();   
};
void Demo::show() {
    cout << "Function defined outside class" << endl;
}

int main() {
    Demo d;
    d.show();
}
