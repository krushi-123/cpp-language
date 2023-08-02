#include<iostream>
using namespace std;

class Area
{
    public :

    int ar(int a)
    {
        return a*a;
    }
    double ar(double pi, int r)
    {
        return pi*r*r;
    }
    int ar(int h, int l, int a)
    {
        return h*l/a;
    }
};

int main()
{
    Area a;

    cout<<"Area of Square : "<<a.ar(9)<<endl;
    cout<<"Area of Circle : "<<a.ar(3.14,2)<<endl;
    cout<<"Area of Triangle : "<<a.ar(4, 5, 2)<<endl;
}