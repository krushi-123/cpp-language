#include<iostream>
using namespace std;

class Volume
{
    public :

    Volume()
    {
        cout<<"Default Constructor is Called..."<<endl;
    }
    Volume(int a)
    {
        cout<<"Volume of Cude : "<<a*a*a<<endl;
    }
    Volume(int l , int w, int h)
    {
        cout<<"Volume of Cuboid : "<<l*w*h<<endl;
    }
    Volume(double pi, int r, int h)
    {
        cout<<"Volume of Cylinder : "<<pi*r*r*h<<endl;
    }
    Volume(int b, int h)
    {
        cout<<"Volume of Prism : "<<b*h<<endl;
    }
};

int main()
{
    Volume v, a(4), b(5,2,7), c(3.14, 4, 8), d(5,9);
}