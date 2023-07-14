#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter Value : ";
    cin>>a;

    if(a % 5 == 0)
    {
        cout<<"A is divisible by 5";
    }
    else
    {
        cout<<"A is not divisible by 5";
    }
}