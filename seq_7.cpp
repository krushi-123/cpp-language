#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout<<"Enter Value of N : ";
    cin>>n;

    i = 0;
    while(i < n)
    {
        cout<<" "<<i;
        i+=2;
    }
}