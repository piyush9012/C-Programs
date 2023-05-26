#include<iostream>
using namespace std;

class employee
{
    int id, basic;
    long da , it , netsal , gsal;
    char name[20];
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
    cout<<id<<"\t"<<name<<"\t\t"<<basic<<"\t\t"<<da<<"\t\t"<<it<<"\t\t"<<gsal<<"\t\t"<<netsal<<endl;
}

int main()
{    
    employee obj;
    int n;
    cout<<"Enter Number of Employees"<<endl;
    cin>>n;
    employee e[n] ;
    for(int i=0 ; i<n ; i++)
    {
        obj.read();
        obj.calculate();
    }
    cout <<"ID\tName\t\tBasic Salary\t DA\t  Gross Salary\t Income Tax\t Net Salary"<<endl; 
    for(int i=0 ; i<n ;i++)
    {
        obj.display();
    }
    return 0;
}