#include<iostream>
using namespace std;

class Hello{
    int n;
    public :

    void SetN()
    {
        cout<<"Enter N : ";
        cin>>n;
    }
    void GetN()
    {
        cout<<"Value of N :  "<<n<<endl;
    }
};

int main()
{
    Hello a[5];

    for(int i = 0; i < 2; i++)
    {
        a[i].SetN();
    }
    for(int i = 0; i < 2; i++)
    {
        a[i].GetN();
    }
}