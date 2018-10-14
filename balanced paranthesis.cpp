#include<iostream>
using namespace std;
class Stack1
{
	int top;
	char a[20];
	public:
		Stack1()
		{
			top=-1;
		}
	void push(int num)
	{
		a[++top]=num;
	}
	char pop()
	{
	  a[--top];
	}
	void check(char *);
};
void Stack1::check(char expr[20])
{
	char *e;
	e=expr;
	int flag=1;
	while(*e!='\0')
	{
		if(*e=='(' || *e=='[' || *e=='{')
		{
			push(*e);
		}
		else if(*e==')') 
		{
			if(a[top]=='(')
			pop();
			else{
					cout<<"imbalanced";
					flag=0;
					break;
				}
		}
		else if(*e==']')
		{
			if(a[top]=='[')
			pop();
			else
			{
				cout<<"Imbalanced";
				flag=0;
				break;
			}
		}
		else if(*e=='}')
		{
			if(a[top]=='{')
			pop();
			else
			{
				cout<<"Imbalanced";
				flag=0;
				break;
			}
		}
		e++;
	}
}
int main()
{
	Stack1 obj_1;
	char b[20];
	cin>>b;
	obj_1.check(b);
	return 0;
}
