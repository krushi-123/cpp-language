#include<iostream>
using namespace std;

int main()
{
    int i = 0, sum = 0;

    do
    {
        sum+=i;
        cout<<" "<<i;
        i+=2;
    }
    while(i <= 10);

    cout<<"\nSum : "<<sum;
}