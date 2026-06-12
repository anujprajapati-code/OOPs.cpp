#include <iostream>
using namespace std;

class Test {
private:
    int num;

public:
    Test() {
        num = 100;
    }
    
    friend void show(Test t);
};

void show(Test t) {
    cout << "Number = " << t.num << endl;
}

int main() {
    Test t;
    show(t);
    
    return 0;
}
