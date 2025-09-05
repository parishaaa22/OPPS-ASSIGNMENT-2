#include <iostream>
using namespace std;

class Demo {
public:
    static int val;
};

int Demo::val = 10;

int main() {
    cout << "Static value = " << Demo::val << endl;
}
