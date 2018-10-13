#include<iostream>
using namespace std;
class node
{  
public:
	int roll;
	int marks;
    class node *next;
		
};
node *top=NULL;

void push(int x,int y)
{   node *temp=new node;
    temp->roll=x;
    temp->marks=y;
    temp->next=NULL;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
	
}
void pop()
{
	node *ptr;
	if(top==NULL)
	{
		cout<<"LL is empty"<<endl;
	}
	else
	{  ptr=top;
		top=top->next;
		delete ptr;
	}
}
void peek()
{
	node *ptr;
	ptr=top;
	while(ptr!=NULL)
	{
		cout<<"roll "<<ptr->roll<<" marks "<<ptr->marks<<endl;
		ptr=ptr->next;
	}
}
int main()
{    node s;
     int size;
	int x,n,y;
	cout<<"1 for push,2 for pop,3 for display ,4 for exit"<<endl;
	cin>>n;
	while(n!=4)
	{
     if(n==1)
	 {   cout<<"total student"<<endl;
	      cin>>size;
		 cout<<"enter roll and marks"<<endl;
	for(int i=0;i<size;i++)
	{   cin>>x>>y;
		push(x,y);
		
		
    }
    cout<<"option"<<endl;
		cin>>n;
		
	}
		  
    if(n==2)
    {
	
    
    	pop();
    	cout<<"option"<<endl;
		cin>>n;
    }
    if(n==3)
     {
	 peek();
cout<<"option"<<endl;
		cin>>n;
}
     if(n>3)
     break;
     
    
}
}

