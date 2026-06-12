#include <iostream>
using namespace std;

class Demo {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Demo d;
    
    cout << "Integer Sum = " << d.add(10, 20) << endl;
    cout << "Double Sum = " << d.add(10.5, 20.5) << endl;
    
    return 0;
}
