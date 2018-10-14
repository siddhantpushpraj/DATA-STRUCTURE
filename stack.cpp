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
	void push(int);
	void pop();
	bool is_empty();
	void peek();	
};
void stack1::push(int x)
{
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
	int x;
	for(int i=0;i<size;i++)
	{   cin>>x;
		s.push(x);
    }
    int n;
    cout<<"total pop"<<endl;
    cin>>n;
      s.peek();
    for(int i=0;i<n;i++)
    	s.pop();
     s.peek();
    
	
}
