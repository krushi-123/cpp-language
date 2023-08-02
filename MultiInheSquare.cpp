#include<iostream>
using namespace std;

class Sq1
{
    protected :
    int a;

    public :
    void SetDataA()
    {
        cout<<"Enter Value : ";
        cin>>a;
    }
};

class Sq2
{
    protected :
    int n;

    public :
    void SetDataN()
    {
        cout<<"Enter Value of N : ";
        cin>>n;
    }
};

class Derived : public Sq1, public Sq2
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
    d.SetDataA();
    d.SetDataN();
    d.product();
}