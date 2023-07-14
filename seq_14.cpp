#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout<<"Enter Value of N : ";
    cin>>n;

    i = 1;
    do 
    {
        cout<<" "<<i*i;
        i++;
    }
    while(i <= n);
}