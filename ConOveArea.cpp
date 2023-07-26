#include<iostream>
using namespace std;

class Area
{
    public :

    Area()
    {
        cout<<"Default Constructor is Called..."<<endl;
    }
    Area(int a)
    {
        cout<<"Area of Squre : "<<a*a<<endl;
    }
    Area(double pi, int r)
    {
        cout<<"Area of Circle : "<<pi*r*r<<endl;
    }
    Area(int h , int l, int a)
    {
        cout<<"Area of Triangle : "<<h*l/a<<endl;
    }
};

int main()
{
    Area c, a(4), b(3.14, 5), d(6, 3, 2);
}