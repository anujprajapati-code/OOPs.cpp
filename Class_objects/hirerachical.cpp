#include <iostream> 
using namespace std; 
 
// Base class 
class A { 
public: 
    void showA() { 
        cout << "This is base class A" << endl; 
    } 
}; 
 
// Derived class B 
class B : public A { 
public: 
    void showB() { 
        cout << "This is derived class B" << endl; 
    } 
}; 
 
// Derived class C 
class C : public A { 
public: 
    void showC() { 
        cout << "This is derived class C" << endl; 
    } 
}; 
 
int main() { 
    B obj1; 
    C obj2; 
 
    obj1.showA(); // inherited from A 
    obj1.showB(); 
 
    obj2.showA(); // inherited from A 
    obj2.showC(); 
 
    return 0; 
} 
