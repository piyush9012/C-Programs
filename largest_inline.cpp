#include<iostream>
using namespace std;
inline int largest(int a, int b,int c=10)
{
    return((a>b && a>c)?a:b>c?b:c);
}

int main()
{
      int x,y,z;
      cout<<"Enter three number:"<<endl;
      cin>>x>>y>>z;
      cout<<"Largest nuumber is: "<<largest(x,y,z)<<endl;
      cout<<"Taking 3rd number default value as 10"<<endl;
      cout<<"Enter two number :"<<endl;
      cin >>x>>y;
      cout<<"Largest number using default value: "<< largest(x,y)<<endl;
      return 0;
}