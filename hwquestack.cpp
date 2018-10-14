
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 #define MAX 6
int Stack[MAX];
int top = -1;

void push(int x);
void pop();
void display();

int main ()
{
    int choice, val;
    choice = -1;
    
    while(choice!=4)
    {   cout<<"enter choice"<<endl;
        cin >> choice;
        switch(choice)
        {
            case 1:// cout<<"Enter the element to push";
                cin>>val;
                push(val);
                break;
            case 2: // cout<<"Enter the element to pop";
                pop();
                break;
            case 3:// cout<<"Display the stack elements";
                display();
                break;
            default:
                break;
        }
    }
    return 0;
}

//Add your code here

void push(int x)
{
    if(top>=(MAX-1))
	cout<<"overflow"<<endl;
	if(top<(MAX-1))
	{
	top++;
	Stack[top]=x;
	}

}
void pop()
{
	if(top<0)
	cout<<"underflow"<<endl;
	if(top!=(-1))
	{
	top--;	
	}
	

}
void display()

{
	int size=top;
   while(size!=-1)
	{
	cout<<Stack[size]<<endl;
	size--;
	if(size==-1)
	break;
	}
	
}

