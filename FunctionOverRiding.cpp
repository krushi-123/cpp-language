#include<iostream>
using namespace std;

class Base
{
    public :
    virtual void Test()
    {
        cout<<"Base Class Function Called..."<<endl;
    }
};
class Derived : public Base{
    public :
    void Test()
    {
        cout<<"Derived Class Function Called..."<<endl;
    }
};

int main()
{
    Base *ptr, b;
    Derived d;
    ptr = &d;
    ptr -> Test();

    ptr = &b;
    ptr -> Test();
}