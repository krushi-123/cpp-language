#include<iostream>
using namespace std;

int main()
{
    int rate = 50;
    int qty = 200;
    int amt = 10000;
    int discount = 500;
    int billamt = 9500;
    float gst;
    int netbill;

    gst = billamt * 18 / 100;
    cout<<"\nGST : "<<gst;

    netbill = gst + billamt;
    cout<<"\nNetBill : "<<netbill;
}