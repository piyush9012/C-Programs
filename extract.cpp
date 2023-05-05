#include <iostream>
using namespace std;
int main()
{
	int a,sum = 0;
	cout<<"Enter a number"<<endl;
	cin>>a;
	while(a!= 0)
	{
		int temp = a%10;
		sum = sum+temp;
		a = a/10;
	}
	cout<< "Sum of digits is "<<sum<<endl;
	return 0;
}
