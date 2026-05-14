#include<iostream>
using namespace std;
class person
{
    void persondisplay()
    {
    cout<<"This is the class of person";
    }
};
class student:virtual public person
{
    void studendisplay()
    {
    cout<<"This is the class of student";
    }
};
class employee:virtual public person

{
    void employeedisplay()
    {
    cout<<"This is the class of em";
    }
};
class workingstudent: public employe
{
    void workingstudentdisplay()
    {
    cout<<"This is the class of person";
    }
};
