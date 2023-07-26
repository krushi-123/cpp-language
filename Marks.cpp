#include<iostream>
using namespace std;

class student{
    int adminNo;
    char sname [20];
    float maths, sci, eng, total;
    
    float cTotal()
    {
        return eng + maths + sci;
    }

    public :

    void takedata()
    {
        cout<<"Enter Roll No : ";
        cin>>adminNo;
        cout<<"Enter Name : ";
        cin>>sname;
        cout<<"Enter Maths Marks : ";
        cin>>maths;
        cout<<"Enter Sci Marks : ";
        cin>>sci;
        cout<<"Enter Eng Marks : ";
        cin>>eng;

        total = cTotal();

    }

    void showdata()
    {
        cout<<endl<<endl;
        cout<<"Roll No. :"<<adminNo<<endl;
        cout<<"Name : "<<sname<<endl;
        cout<<"Maths Marks : "<<maths<<endl;
        cout<<"Sci Marks : "<<sci<<endl;
        cout<<"Eng Marks : "<<eng<<endl;
        cout<<"Total Marks : "<<total<<endl; 
    }
};

int main()
{
    student s;
    s.takedata();
    s.showdata();
}