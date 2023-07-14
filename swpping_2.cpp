#include<iostream>
using namespace std;

int main()
{
    int a , b , c;

    cout<<"Enter Value of a : ";
    cin>>a;
    cout<<"Enter Value of b : ";
    cin>>b;
    
    c = b;
    b = a;
    a = c;

    cout<<"Value of a : "<<a;
    cout<<"\nValue of b : "<<b;

}