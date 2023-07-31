#include<iostream>
using namespace std;

class Volume 
{
    public :

    int vo(int a)
    {
        return a*a*a;
    }
    int vo(int l, int w, int h)
    {
        return l*w*h;
    }
    double vo(double pi, int r, int h)
    {
        return pi*r*r*h;
    }
    int vo(int b, int h)
    {
        return b*h;
    }
};

int main()
{
    Volume v;

    cout<<"Volume of Square : "<<v.vo(3)<<endl;
    cout<<"Volume of Cuboid : "<<v.vo(2,4,6)<<endl;
    cout<<"Volume of Cylinder : "<<v.vo(3.14, 4, 8)<<endl;
    cout<<"Volume of Prism : "<<v.vo(5, 9)<<endl;
}