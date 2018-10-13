#include<iostream>
using namespace std;
#define size 10
class stack1
{
int arr[size];
int top;
public:
	stack1()
    	{
		top=-1;
		}
  friend	void push(int);
	void pop();
	bool is_empty();
	void peek();	
};
class stack2
{
int arr[size];
int top;
public:
	stack2()
    	{
		top=-1;
		}
	void push1(int);
	
};
void stack1::push(int x)
{   cout<<"stack1"<<endl;
	if(top==size)
	cout<<"overflow"<<endl;
	top++;
	arr[top]=x;
}
void stack2::push1(int x)
{   cout<<"stack2"<<endl;
	if(top==size)
	cout<<"overflow"<<endl;
	top++;
	arr[top]=x;
}
void stack1::pop()
{
	if(top==-1)
	cout<<"underflow"<<endl;
	top--;
}
void stack1::peek()
{
	cout<<arr[top]<<endl;
}
int main()
{    stack1 s;
	 stack2 s2;
	int x,n;
	cout<<"1 for push,2 for pop,3 for peek ,4 for exit"<<endl;
	cin>>n;
	while(n!=4)
	{
     if(n==1)
	 {
		 
	for(int i=0;i<size;i++)
	{   
	    if(i<(size/2))
	    {
			cin>>x;
			s.push(x);
		}
		else
		{   
			cin>>x;
			s2.push1(x);
		}
		
    }
    cout<<"option"<<endl;
		cin>>n;
		
	}
		  
    if(n==2)
    {
	
    
    	s.pop();
    	cout<<"option"<<endl;
		cin>>n;
    }
    if(n==3)
     {
	 s.peek();
cout<<"option"<<endl;
		cin>>n;
}
     if(n>3)
     break;
     
    
}
}
