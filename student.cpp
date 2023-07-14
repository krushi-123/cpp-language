#include<iostream>
using namespace std;

int main()
{
    int maths, che, phy, total, percent;

    cout<<"Enter marks of maths : ";
    cin>>maths;
    cout<<"Enter marks of Che : ";
    cin>>che;
    cout<<"Enter marks of Phy : ";
    cin>>phy;

    total=maths + che + phy;
    cout<<"\nTotal Marks : "<<total;
    
    percent=total*100/300;
    cout<<"\nPercentage :"<<percent;

}
