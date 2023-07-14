#include<iostream>
using namespace std;

int main()
{
    int mark;

    cout<<"Enter Your Marks : ";
    cin>>mark;

    if(mark > 105)
    {
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}