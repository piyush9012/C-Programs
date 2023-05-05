#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, f=0;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"In between numbers are"<<endl;
	while(a<b)
	{
		f=0;
		if(a==0 || b==0) f=1;
		for(int i=2; i<=a/2; i++)
		{
			if(a%i==0)
			{
				f=1;
				break;
			}
		}
		if(f==0) cout<<a<<" ";
		++a;
	}
	return 0;
}
