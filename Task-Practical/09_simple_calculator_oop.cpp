#include <iostream>
using namespace std;

class Calculator {
public:
    void add(int a, int b) {
        cout << "Addition = " << a + b << endl;
    }
    
    void sub(int a, int b) {
        cout << "Subtraction = " << a - b << endl;
    }
    
    void mul(int a, int b) {
        cout << "Multiplication = " << a * b << endl;
    }
    
    void div(int a, int b) {
        if(b != 0)
            cout << "Division = " << (float)a / b << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    Calculator c;
    c.add(10, 5);
    c.sub(10, 5);
    c.mul(10, 5);
    c.div(10, 5);
    
    return 0;
}
