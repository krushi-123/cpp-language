#include<iostream>
using namespace std;

class book
{
    private : 
    int bookNo;
    char booktitle[20];
    float price;
    float total_cost(int n)
    {
        return price * n;
    }

    public : 
    void input()
    {
        cout<<"Enter Book No : ";
        cin>>bookNo;
        cout<<"Enter Book title : ";
        cin>>booktitle;
        cout<<"Enter Book price : ";
        cin>>price;
    }

    void purchase()
    {
        int n;
        cout<<"Enter the number of Copies to be Purchase : ";
        cin>>n;

        float totalcost = total_cost(n);
        cout<<"Total cost to be Paid : "<<totalcost<<endl;
    }
};

int main()
{
    book b;
    b.input();
    b.purchase();
}