#include<iostream>
using namespace std;
class employee
{
    int id, basic;
    long da, it, netsal, gsal;
    char name[25];
    public:
        void read();
        void display();
        void calculate();
};

void employee::read()
{
    cout<<"Enter Employee ID"<<endl;
    cin>>id;
    cout<<"Enter Employee Name"<<endl;
    cin>>name;
    cout<<"Enter Basic Salary"<<endl;
    cin>>basic;
}

void employee::calculate()
{
    da=(0.52)*basic;
    gsal = da+basic;
    it = (0.3)*gsal;
    netsal = basic+da-it;
}

void employee::display()
{
    cout<<id<<"\t"<<name<<"\t"<<basic<<"\t"<<da<<"\t  "<<gsal<<"\t\t"<<it<<"\t\t"<<netsal<<endl;
}

int main()
{
    int n;
    cout<<"Enter Number of Employees"<<endl;
    cin>>n;
    employee e[n] ,*p;
    for(int i=0; i<n; i++)
    {
        p = &e[i];
        p -> read();
        p -> calculate();
    }
    cout <<"ID   Name   Basic Salart  DA    Gross Salary   Income Tax  Net Salary"<<endl; 
    for(int i=0 ; i<n ;i++)
    {
        p = &e[i];
        p-> display();
    }
    return 0;
}