#include<iostream>
using namespace std;

class student 
{
    public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout<<"Name : "<<name;
        cout<<"Age : "<<age;
        cout<<"Gender : "<<gender;
    }
};

int main()
{
    int i;
    student arr[3];
    cout<<"Name : ";
    cin>>arr[i].name;
    cout<<"Age : ";
    cin>>arr[i].age;
    cout<<"Gender : ";
    cin>>arr[i].gender;

    for(i = 1; i < 3; i++)
    {
        arr[i].printInfo();
    }
    return 0;
}