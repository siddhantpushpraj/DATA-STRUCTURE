#include<iostream>
using namespace std;
struct node
{
	int priority;
	int data;
	struct node *next;
}*start;
class p_queue
{
	public:
		p_queue()
		{
			start=NULL;
		}
		void enqueue(int ele,int p);
		void dequeue();
		void disp();
};
void p_queue::enqueue(int x,int y)
{
	node *temp=new node;
	temp->data=x;
	temp->priority=y;
	temp->next=NULL;
	node *p,*ptr;
	p=temp;
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=p;
	}
}
void p_queue::disp()
{
	int t1,t2;
	node *p,*p1,*ptr;
	p=start;
	ptr=start;
	while(p->next!=NULL)
	{
		while(ptr->next!=NULL)
		{
			p1=ptr->next;
			if(ptr->priority>p1->priority)
			{
				t1=ptr->data;
				ptr->data=p1->data;
				p1->data=t1;
				t2=ptr->priority;
				ptr->priority=p1->priority;
				p1->priority=t2;
			}
			ptr=ptr->next;
		}
		p=p->next;
	}
	if(start==NULL)
	{
		cout<<"LIST IS EMPTY";
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			cout<<"|"<<ptr->data<<"|"<<ptr->priority<<"->";
			ptr=ptr->next;
		}
		cout<<"|"<<ptr->data<<"|"<<ptr->priority;
		ptr=ptr->next;
		cout<<endl;
	}
}
void p_queue::dequeue()
{
	start=start->next;
}
int main()
{
p_queue p1;
int n,p,x;
cout<<"enter number of elements : ";
cin>>n;
for(int i=0;i<n;i++)
{
	cout<<"enter data      : ";
	cin>>x;
	cout<<"enter priotrity : ";
	cin>>p;
	p1.enqueue(x,p);
}
p1.disp();
p1.dequeue();
p1.enqueue(14,12);
p1.disp();
}
