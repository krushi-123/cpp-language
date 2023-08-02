#include<iostream>
using namespace std;

class Fac1
{
    protected :
    int a;

    public :
    void SetDataA()
    {
        cout<<"Enter Value of A : ";
        cin>>a;
    }
};

class Fac2
{
    protected :
    int b;

    public :
    void SetDataB()
    {
        cout<<"Enter Value of b : ";
        cin>>b;
    }
};

class Derived : public Fac1, public Fac2
{
    protected :
    int s = 1;
    
    int p = 1;

    public :
    void Factorial()
    {
        for(int i = 1; i <= a; i++)
        {
            s=s*i;
        }
        cout<<"Factorial of A : "<<s<<endl;
        for(int j = 1; j <= b; j++)
        {
            p=p*j;
        }
        cout<<"Factorial of B : "<<p<<endl;
    }
};

int main()
{
    Derived d;
    d.SetDataA();
    d.SetDataB();
    d.Factorial();
}