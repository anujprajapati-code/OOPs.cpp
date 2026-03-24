
#include <iostream>
using namespace std;

int main()
{
    int num,i,temp;
    double rev=0,rem;
    cout<<"Enter the integer: ";
    cin>>num;
    temp = num;
    if (num>=10){
        for (i=1;i<=num;i++){
            rem = num % 10;
            rev = rev*10 + rem;
            num = num/10;
        }
        if (rev == temp){
            cout<<"It is PALINDROME";
        }
        else{
            cout<<"Number is not PALINDROME";
        }
    }
    else if (num >= 0){
        cout<<"Number is PALINDROME"<<num;
    }
    else if ( num < 0){
        cout<<"PALINDROME of Negative Number is not calculated";
    }
    else{
        cout<<"PALINDROME cannot be guaranteed";
    }

    return 0;
}
