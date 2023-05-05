#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, gcd;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(b>a)
	{
		swap(a,b);
	}
	for(int i=1; i<=b; i++)
	{
		if(a%i == 0 && b%i == 0)
		{
			gcd = i;
		}
	}
	cout<<"GCD is "<<gcd<<endl;
	return 0;
}
