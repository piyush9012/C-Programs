
#include<iostream>
using namespace std;
class largest
{     
    public:
        friend int largest(int ,int ,int);
};

int largest(int a , int b ,int c=10)
{    
    return((a>b && a>c)?a:b>c?b:c);
}

int main()
{
    float x,y,z;
    cout<<"Enter three numbers:"<<endl;
    cin>>x>>y>>z;
    cout<<"Largest number is: "<<largest(x,y,z)<<endl;
    cout<<"Taking 3rd number default value as 10"<<endl;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;
    cout<<"Largest using default value "<< largest(x,y)<<endl;
}
