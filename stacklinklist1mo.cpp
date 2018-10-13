#include<iostream>
#include<stack>
using namespace std;
#define size 10
void friend class stack1
{
int arr[size];
int top1;
public:
	stack1()
    	{
		top1=-1;
		}
 	void push(int);
	void pop();

};
class stack2
{
int arr[size];
int top2;
public:
	stack2()
    	{
		top2=(size-1);
		}
	void push1(int);

};
void stack1::push(int x)
{   cout<<"stack1"<<endl;
	if((top1+1)==top2)
	cout<<"overflow"<<endl;
	else
	{
		top++;
		arr[top]=x;
	}
}
void stack2::push1(int x)
{    
	cout<<"stack2"<<endl;
	if((top+1)==top2)
	cout<<"overflow"<<endl;
	else
	{
		arr[top]=x;
		top2--;
	}
}
void stack1::pop()
{
	if(top==-1)
	cout<<"underflow"<<endl;
	top--;
}
int main()
{    int a[30],size1,size2;
	 stack1 s;
	 stack2 s2;
	int x,n;
	int opt;
	int i=0;
	cout<<"1 for stack 1 or 2 for stack 2"<<endl;
	while(i<10)
	{   cout<<"option"<<endl;
		cin>>opt;
		cout<<"element"<<endl;
		cin>>x;
		if(opt==1)
			s.push(x);
		if(opt==2)
			s2.push1(x)
	}
 
}
