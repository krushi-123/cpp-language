#include<iostream>
using namespace std;

class Base
{
    public :
    virtual void Test() = 0; 
};
class Derived : public Base
{
    public:
    void Test()
    {
        cout<<"Derived Class Funtion Called"<<endl;
    }
};

int main()
{
    Derived d;
    d.Test();
}