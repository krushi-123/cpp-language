#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter Value of A : ";
    cin>>a;

    if(a % 15 == 0)
    {
        cout<<"A is Divisible by 5 And 3";
    }
    else{
        cout<<"A is not Divisible by 5 and 3";
    }
}