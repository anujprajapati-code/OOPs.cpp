#include <iostream>
using namespace std;

int main()
{
    int num,i;
    double rev=0,rem;
    cout<<"Enter the integer: ";
    cin>>num;
    if (num>=10){
        for (i=1;i<=num;i++){
            rem = num % 10;
            rev = rev*10 + rem;
            num = num/10;
        }
        cout<<"Reverse of the number is "<<rev;
    }
    else if (num > 0){
        cout<<"Reverse of the number is "<<num;
    }
    else if ( num <= -10){
        num *=-1;
        for (i = 1;i<=num;i++){
            rem = num % 10;
            rev = rev*10 + rem;
            num = num / 10;
        }
        cout<<"Reverse of the number is "<<rev*-1;
    }
    else if (num>-10){
        cout<<"Reverse of the number is "<<num;
    }
    else{
        cout<<"Reverse cannot be calculated";
    }

    return 0;
}
