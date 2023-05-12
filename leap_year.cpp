// Design a c++ program to check whether a given year is a leap year or not 

#include <iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year"<<endl;
	cin>>year;
	if(year%4==0)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				cout<<"It is a Leap Year"<<endl;
			}
			else
			{
				cout<<"Not a Leap Year"<<endl;
			}
		}
		else
		{
			cout<<"It is a Leap Year"<<endl;
		}
	}
	else
	{
		cout<<"Not a Leap Year"<<endl;
	}
	return 0;

}
