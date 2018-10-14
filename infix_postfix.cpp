#include<iostream>
#include<stack>
using namespace std;
class stack1
{
	char a[20];
	int top;
	public:
		stack1()
		{
			top=-1;
		}
		void push(int num)
		{
			a[++top]=num;
		}
		char pop()
		{
			return a[top--];
		}
		int priority(char);
		void postfix(char *);
};
int stack1::priority(char p)
{
	if(p=='(')
		return 0;
	else if(p=='+' || p=='-')
	return 1;
	else if(p=='*' || p=='/')
	return 2;
	else if(p=='^')
	return 3;
}
void stack1::postfix(char expr[20])
{
	char *e,x;
	e=expr;
	while(*e!='\0')
	{
		if(isalnum(*e))
		cout<<*e;
		else if(*e=='(')
		push(*e);
		else if(*e==')')
		{
			while((x=pop())!='(')
			    cout<<x;
			    
			
		}
		else
		{
			while(priority(a[top])>=priority(*e))
				cout<<pop();
			push(*e);
		}
		e++;
	}
	while(top!=-1)
	{
		cout<<pop();
	}
}
int main()
{
	stack1 obj_1;
	char b[20];
	
		cin>>b;
	obj_1.postfix(b);
	return 0;
}
