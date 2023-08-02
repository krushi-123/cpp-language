#include<iostream>
using namespace std;

class Base1
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

class Base2
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

class Derived : public Base1, protected Base2
{
    public :
    void product()
    {
        Base2 :: SetB();
        cout<<"Product of A and B : "<<a*b<<endl;
    }
};

int main()
{
    Derived d;
    d.SetA();
    d.product();
}
