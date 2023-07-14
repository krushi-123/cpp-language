#include<iostream>
using namespace std;

int main()
{
    int a, b , c;

    cout<<"Enter Value of A : ";
    cin>>a;
    cout<<"Enter Value of B : ";
    cin>>b;
    cout<<"Enter Value of C : ";
    cin>>c;

    if(a > b)
    {
        if(a > c)
        {
            cout<<"A is largest";
        }
    }
    else if (b > c)
    {
        cout<<"B is largest";
    }
    else
    {
        cout<<"C is largest";
    }
}