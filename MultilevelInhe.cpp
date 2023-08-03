#include<iostream>
using namespace std;

class Base
{
    protected :
    int a;

    public :
    void SetA()
    {
        cout<<"Enter A : ";
        cin>>a;
    }
};

class Test : public Base
{
    protected :
    int b;

    public :
    void SetB()
    {
        cout<<"Enter B : ";
        cin>>b;
    }
};

class Derived : public Test{
    public :

    void product()
    {
        Test :: SetB();
        cout<<"Product of A and B : "<<a*b<<endl;
    }
};

int main()
{
    Derived d;
    d.SetA();
    d.product();
}