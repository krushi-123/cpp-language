#include<iostream>
using namespace std;

class Student
{
    int s;
    int adminNo;
    char sname[20];
    float maths, sci, eng, total, percent;

    float ctotal()
    {
        return eng + maths + sci;
    }
    float cpercent()
    {
        return total * 100 / 300;
    }

    public :

    void SetS()
    {
        cout<<"Enter Your Roll No. : ";
        cin>>adminNo;
        cout<<"Enter Your Name : ";
        cin>>sname;
        cout<<"Enter Marks of Maths : ";
        cin>>maths;
        cout<<"Enter Marks of English : ";
        cin>>eng;
        cout<<"Enter Marks of Scince : ";
        cin>>sci;
        total = ctotal();
        percent = cpercent();
    }
    void GetS()
    {
        cout<<endl<<endl;
        cout<<"Roll No. : "<<adminNo<<endl;
        cout<<"Name : "<<sname<<endl;
        cout<<"Maths Marks : "<<maths<<endl;
        cout<<"English Marks : "<<eng<<endl;
        cout<<"Scine Marks : "<<sci<<endl;
        cout<<"Total Marks : "<<total<<endl;
        cout<<"Percentage : "<<percent<<"%"<<endl;
    }
};

int main()
{
    Student s[5];

    for(int i = 0; i < 2; i++)
    {
        s[i].SetS();
        s[i].GetS();
    }
    
}