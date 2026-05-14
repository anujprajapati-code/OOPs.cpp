//WAP a program to find given number is prime ,natural number,whole number ,real number
//WAP a to find factorial of -6 desired output
//WAP to add two string when first string is your first name and second string is last name
#include <iostream>
using namespace std;

class Number {
public:
    int n;

    void input() {
        cout << "Enter number: ";
        cin >> n;
    }

    void check() {

        
        int count = 0;

        for(int i=1; i<=n; i++) {
            if(n%i==0) {
                count++;
            }
        }

        if(count==2)
            cout << "Prime Number" << endl;
        else
            cout << "Not Prime Number" << endl;


        if(n>0)
            cout << "Natural Number" << endl;

    
        if(n>=0)
            cout << "Whole Number" << endl;

        // Real Number
        cout << "Real Number" << endl;
    }
};

int main() {

    Number obj;

    obj.input();
    obj.check();

    return 0;
}