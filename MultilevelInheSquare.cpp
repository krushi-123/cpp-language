#include<iostream>
using namespace std;

class Sq1
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

class Sq2 : public Sq1
{
    protected :
    int n;

    public :
    void SetN()
    {
        cout<<"Enter Value of N : ";
        cin>>n;
    }
}; 

class Derived : public Sq2
{
    public :
    void product()
    {
        for(int i = a; i <= n; i++)
        {
            cout<<"Square : "<<i*i<<endl;
        }
    }
};

int main()
{
    Derived d;
    d.SetA();
    d.SetN();
    d.product(); 
}