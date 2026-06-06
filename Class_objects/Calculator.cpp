#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
class calculator{
    //access specifier
    private: //can only be accessed inside the class.
        string op;         // there are Data Members.
    protected: //can be accessed iside the derived class.
        float num1,num2;            // protected Data Members.
    public: //can be accessed by object anywhere in the program.
        void add(float a,float b);   // Member function
        void sub(float a,float b);
        void mult(float a,float b);
        void divi(float a,float b);
        void mod(float a,float b);
    calculator(float a,float b){
        num1 = a;
        num2 = b;
        op;
    }
    void what(float a,float b){
        cin.ignore();
        cout <<"Enter operator : ";
        getline(cin, op);
        if ( op == "+" || op == "add" || op == "addition" || op == "sum")
            add( a, b );
        else if ( op == "-" || op == "sub" || op == "substraction" || op == "difference")
            sub( a, b);
        else if (op == "*" || op == "multi" || op == "multiplication" || op == "product")
            mult( a, b);
        else if (op == "/" || op == "div" || op == "division" || op == "quotient")
            divi(a,b);
        else if (op == "%" || op == "mod" || op == "rem" || op == "reminder" || op == "modulus")
            mod(a,b);
        else
            cout << "Error : Enter Valid Operator" << endl;
    }
};
void calculator :: add(float a,float b){
    cout << "Sum : " << (a + b) << endl;    //Defining function outside the class.
}
void calculator :: sub(float a,float b){
    cout << "Diff : " << (a - b) << endl;    //Defining function outside the class.
}
void calculator :: mult(float a,float b){
    cout << "Prod : " << (a * b) << endl;    //Defining function outside the class.
}
void calculator :: divi(float a,float b){
    if(b != 0.0f)
        cout << "Quot : " << (a / b) << endl;    //Defining function outside the class.
    else
        cout << "Not Defined" << endl;
}
void calculator :: mod(float a,float b){
    if (b != 0.0f)
        cout << " Rem : " << fmod(a, b) << endl;
    else
        cout << " Rem : undefined" << endl;    //Defining function outside the class.
}

int main(){
    float a,b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    calculator calc( a, b);
    calc.what(a, b);
    return 0;
}