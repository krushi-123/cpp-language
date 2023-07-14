#include<iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cout<<"Enter Value of N : ";
    cin>>n;

    do 
    {
        if (i % 2 == 0)
        {
            cout<<" "<<i*i;
        }
        else 
        {
            cout<<" "<<i;
        }
        i++;
    }
    while(i <= n);
}