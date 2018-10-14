#include<iostream>
#include<stack>
using namespace std;
class stack1
{
	char a[20],a2[20];
	int top,top2;
	public:
		stack1()
		{
			top=-1;
			top2=-1;
		}
		void push(int num)
		{
			a[++top]=num;
			
		}
		void push2(int num)
		{
			
			a2[++top2]=num;
		}
		char pop()
		{
			return a[top--];
		}
		char pop2()
		{
			return a2[top2--];
		}
		int priority(char);
		void postfix(char *);
		void eval();
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
		{
		cout<<*e;
		push2(*e);
		}
		else if(*e=='(')
		push(*e);
		else if(*e==')')
		{
			while((x=pop())!='(')
			    cout<<x;
			    push2(x);
			    
		}
		else
		{
			while(priority(a[top])>=priority(*e))
				{
				x=pop();
				cout<<x;
				push2(x);
			
				}
			push(*e);
			
		}
		e++;
	}

	while(top!=-1)
	{   //cout<<"okk2"<<endl;
		x=pop();
		cout<<x;
		push2(x);
		
	}
	cout<<endl;
	while(top2!=-1)
	{  //cout<<"okk3"<<endl;
		push(pop2());
	}


}
void stack1::eval()
{  char x;
int s=0;
	while(top!=-1)
	{   x=pop();
        //cout<<x<<endl;	
		if(isalnum(x))
		{
			push2(x-'0');
		}
		else if(x=='+')
		{
	       		s=pop2()+pop2();
	       	//	cout<<s;
	       		push2(s);
	       		
		}
		else if(x=='-')
		{
	       		s=pop2()-pop2();
	       		push2(s);
		
		}
		else if(x=='*')
		{
	       		s=pop2()*pop2();
	       		push2(s);
		
		}
		else if(x=='/')
		{
	       		s=pop2()/pop2();
	       		push2(s);
		
		}		
	}
	cout<<s;
}
int main()
{
	stack1 s1;
	char b[20];
	cin>>b;
	s1.postfix(b);
	s1.eval();
	return 0;
}
