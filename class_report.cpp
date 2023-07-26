#include<iostream>
using namespace std;

class report
{
    int adNo, i;
    char name[20];
    float mark[5], avrage, sum = 0;

    void gelavg()
    {
        for(i = 0; i < 5; i++)
        {
            sum = sum + mark[i];
        }
        avrage = sum / 5;

    }

    public :
    void readinfo()
    {
        cout<<"Enter the Admission No. : ";
        cin>>adNo;
        cout<<"Enter a Name : ";
        cin>>name;
        cout<<"Enter a Marks For 5 Subject ";
        for(i = 0; i < 5; i++)
        {
            cin>>mark[i];
        }
        cout<<endl;
        gelavg();
    }
    void displayinfo()
    {
        cout<<"Addmission No. : "<<adNo<<endl;
        cout<<"Name : "<<name<<endl;
        for(i = 0; i < 5; i++)
        {
            cout<<mark[i]<<endl;
        }
        cout<<"Average : "<<avrage<<endl;

    }
};

int main()
{
    report r;
    r.readinfo();
    r.displayinfo();
}