#include<iostream>
using namespace std;

class Base
{
    protected:
    int n;

    public :
    void SetN()
    {
        cout<<"Enter Value of n : ";
        cin>>n;
    }
};

class Table : public Base
{
    public :
    void SetT()
    {
        for(int i = 1; i <= 10; i++)
        {
            cout<<i<<" * "<<n<<" : "<<i*n<<endl;
        }
    }
};

class Revers : public Base
{
    public :
    void SetR()
    {
        for (int i = n; i >= 1; i--)
        {
            cout<<""<<i;
            cout<<" ";
        }
    }
};

int main()
{
    Table t;

    t.SetN();
    t.SetT();

    Revers r;

    r.SetN();
    r.SetR();
}