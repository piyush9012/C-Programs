#include <iostream>
using namespace std;
int main()
{
	int n, res;
	res = 1;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=n; i>=1; i--)
	{
		res = res*i;
	}
	cout<<"Factorial is "<<res<<endl;
	return 0;
}
