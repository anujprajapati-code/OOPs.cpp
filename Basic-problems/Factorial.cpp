#include <iostream>
using namespace std;

int main()
{
    int num,i;
    double fact = 1;
    cout<<"Enter the integer: ";
    cin>>num;
    if (num>0){
        for (i=num;i>0;i--){
            fact *=i;
        }
        cout<<"Factorial is "<<fact;
    }
    else if (num == 0){
        cout<<"Factorial is 1";
    }
    else{
        cout<<"Factorial of negative number cannot calculated\nGive positive number in input";
    }

    return 0;
}
