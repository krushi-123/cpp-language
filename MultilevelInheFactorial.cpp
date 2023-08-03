#include<iostream>
using namespace std;

class Fac1
{
    protected :
    int a;

    public :
    void SetA()
    {
        cout<<"Enter Value of A : ";
        cin>>a;
    }
};

class Fac2 : public Fac1
{
    protected :
    int b;

    public :
    void SetB()
    {
        cout<<"Enter Value of B : ";
        cin>>b;
    }
};

class Derived : public Fac2
{
    protected :
    int s = 1;
    int p = 1;

    public :
    void Factorial()
    {
        for(int i = 1; i <= a; i++)
        {
            s = s*i;
        }
        cout<<"Factorial : "<<s<<endl;
        for(int j = 1; j <= b; j++)
        {
            p = p*j;
        }
        cout<<"Factorial : "<<p<<endl;
    }
};

int main()
{
    Derived d;
    d.SetA();
    d.SetB();
    d.Factorial();
}