#include<iostream>
using namespace std;

class Test
{
    int a, b;

    public :

    Test()
    {
        a = 5, b = 10;
        cout<<"Test class called...."<<endl;
        cout<<"product of a and b is : "<<a*b<<endl;
    }
    Test (Test &x)
    {
        cout<<"Copy Constructor...."<<endl;
        cout<<"Product of a and b is : "<<x.a*x.b<<endl;
    }
};

int main()
{
    Test t;
    Test b(t);
}