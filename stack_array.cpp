// Design a c++ Program to implement a stack using the foillowing functions 1 Push 2 Pop 3 Display
#include <iostream>
using namespace std;
#define N 5

int top = -1;
int stack[N];

void push()
{
	int n;
	if (top == N-1)
	{
		cout<<"Stack Overflow"<<endl;
	}
	else
	{
		cout<<"Enter the element"<<endl;
		cin>>n;
		top++;
		stack[top]= n;
	}
}

void pop()
{
	if(top == -1)
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		cout<<"The deleted element is "<<stack[top]<<endl;
		top--;
	}
}

void display()
{
	if(top == -1)
	{
		cout<<endl<<"Stack Underflow"<<endl;
	}
	else
	{
		cout<<"Element sin the stack are"<<endl;
		for (int i=top; i>=0; i--)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
}

void peek()
{
	if(top == -1)
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		cout<<"The top element is "<<stack[top];
	}
	cout<<endl;
}

int main()
{
    int choice;
    while (1)
    {
        cout<<"Select the operation"<<endl;
        cout<<"--------------------"<<endl;
        cout<<"1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n";
		cin>>choice;
        switch (choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: exit(0);
            default: "Invalid Input";
        }
    }
    return 0;
}
