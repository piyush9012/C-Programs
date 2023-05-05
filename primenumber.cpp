#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int f = 0;
	for(int i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			f = 1;
		}
	}
	if(f == 0) cout<<"True"<<endl;
	else cout<< "False"<<endl;
	return 0;
}
