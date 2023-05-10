#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i;
    cout<<"Enter the number: "<<endl;
    cin>> num;
    for (i = 2; i<num; i++)
    {
        if(num%i==0)
        {
            cout<<"Not a Prime Number"<<endl;
            break;
        }
    }
    if(i == num)
    {
        cout<<"It is a Prime Number"<<endl;
    }
    return 0;
}
