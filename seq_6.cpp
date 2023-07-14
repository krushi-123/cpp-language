#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout<<"Enter Value of N : ";
    cin>>n;

    i = 1;
    while(i < n)
    {
        cout<<" "<<i;
        i+=2;
    }
}