#include<iostream>
using namespace std;

class batsman
{
    int bcode, inning, notout, run, batvg;
    char bname[20];
    void calcavg()
    {
        batvg = run / (inning - notout); 
    }

    public :
    void readdata()
    {
        cout<<"bcode : ";
        cin>>bcode;
        cout<<"Enter Name : ";
        cin>>bname;
        cout<<"Innings : ";
        cin>>inning;
        cout<<"Notout : ";
        cin>>notout;
        cout<<"Run : ";
        cin>>run;

        calcavg();
    }
    void displaydata()
    {
        cout<<"bcode : "<<bcode<<endl;
        cout<<"Name : "<<bname<<endl;
        cout<<"Innings : "<<inning<<endl;
        cout<<"Notout : "<<notout<<endl;
        cout<<"Run : "<<run<<endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}