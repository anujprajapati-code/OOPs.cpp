#include<iostream>
using namespace std;
class A
{
    public:
    void displayA()
    {
        cout<<"It is class of A"<<endl;
    }
};
class B: virtual public A
{
    public:
    void displayB()
    {
        cout<<"It is class of B"<<endl;
    }
};
class C: virtual public A

{
    public:
    void displayC()
    {
        cout<<"It is class of C"<<endl;                                           
    }
};
class D: public B,public C
{
    public:
    void displayD()
    {
        cout<<"It is class of D";
    }
};
int main()
{
    D obj;
     obj.displayA();
     obj.displayB();
      obj.displayC();
       obj.displayD();
}