#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter Value of a : ";
    cin>>a;
    cout<<"Enter Value of b : ";
    cin>>b;

    b = a + b;
    a = b - a;
    b = b - a;

    cout<<"Value of a : "<<a;
    cout<<"\nValue of b : "<<b;
     
}