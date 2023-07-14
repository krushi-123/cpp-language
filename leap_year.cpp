#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter Value of A : ";
    cin>>a;

    if(a % 4 == 0)
    {
        cout<<"A is leap year";
    }
    else 
    {
        cout<<"A is not leap year";
    }
}