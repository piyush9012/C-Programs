// Design a c++ program to print the multiplication table of a number

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(int i=1; i<=10; i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i;
		cout<<endl;
	}
	return 0;
}
