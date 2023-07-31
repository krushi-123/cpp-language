#include<iostream>
using namespace std;

class Test
{
    public:

    int hello(int a)
    {
        return a*a;
    }
    double hello(double a)
    {
        return a+a;
    }
    int hello(int a, int b)
    {
        return a*b;
    }
    int hello(int a, int b, int c)
    {
        return a+b+c;
    }
};

int main()
{
    Test h;

    cout<<"Square : "<<h.hello(2)<<endl;
    cout<<"Addition : "<<h.hello(4.6)<<endl;
    cout<<"Product : "<<h.hello(4,5)<<endl;
    cout<<"Add : "<<h.hello(6,3,8)<<endl;
}