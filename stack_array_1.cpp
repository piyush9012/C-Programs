// Design a c++ Program to implement a stack using the foillowing functions 1 Push 2 Pop 3 Display
#include <iostream>
using namespace std;
#define N 5

int top = -1;
int stack[N];

void push(int n)
{
	if (top == N-1)
	{
		cout<<"Stack Overflow"<<endl;
	}
	else
	{
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
    push(10);
    push(15);
    push(20);
    push(25);
    push(30);
    display();
    pop();
    pop();
    peek();
    display();
    
}
