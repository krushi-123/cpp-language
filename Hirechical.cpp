#include<iostream>
using namespace std;

class Base
{
    protected :
    int n;

    public :
    void SetN(int a)
    {
        n = a;
    }
};

class Dervied1 : public Base
{
    int m;

    public :
    void SetM(int b)
    {
        m = b;
    }
    void product()
    {
        cout<<"product of m amd n is : "<<m*n<<endl;
    }
};

class Derived2 : public Base
{
    int a;

    public :
    void SetA(int b)
    {
        a = b;
    }
    void Add()
    {
        cout<<"Addition of a and n is : "<<a*n<<endl;
    }
};

int main()
{
    Dervied1 d1;
    d1.SetN(5);
    d1.SetM(15);
    d1.product();

    Derived2 d2;
    d2.SetN(10);
    d2.SetA(15);
    d2.Add();
}