#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "Child Class" << endl;
    }
};

int main() {
    Child c;
    c.show();
    c.display();
    
    return 0;
}
