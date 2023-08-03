#include<iostream>
using namespace std;

class Base
{
    protected :
    int n;

    public :
    void SetN(int a)
    {
        n  = a;
    }
};

class Derived : public Base
{
    protected :
    int m;

    public :
    void SetM(int b)
    {
        m = b;
    }
};

class Dervied2 
{
    protected :
    int a;

    public :
    void SetA(int b)
    {
        a = b;
    }
};

class ABC : public Derived, public Dervied2
{
    public :
    void product()
    {
        cout<<"Product Of A, M And N : "<<n*m*a<<endl;
    }
};

int main()
{
    ABC z;

    z.SetA(5);
    z.SetM(10);
    z.SetN(15);
    z.product();
}