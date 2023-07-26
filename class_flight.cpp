#include<iostream>
using namespace std;

class flight
{
    int flightNo;
    char destination[30];
    float distance, fuel;

    void calfuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else{
            fuel = 2200;
        }
    }

    public : 
    void feedinfo()
    {
        cout<<"Enter Flight No : ";
        cin>>flightNo;
        cout<<"Enter Destination : ";
        cin>>destination;
        cout<<"Enter Distance : ";
        cin>>distance;

        calfuel();
    }

    void showinfo()
    {
        cout<<"Flight Number : "<<flightNo<<endl;
        cout<<"Destination : "<<destination<<endl;
        cout<<"Total Distance : "<<distance<<"Km"<<endl;
        cout<<"Fuel : "<<fuel<<"Liter"<<endl;
    }
};

int main()
{
    flight f;
    f.feedinfo();
    f.showinfo();
}