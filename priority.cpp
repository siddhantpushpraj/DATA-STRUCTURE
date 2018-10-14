#include<iostream>
using namespace std;
struct  node
{
	int priority;
	int data;
	struct  node *next;
}*start,*rear;
class p_queue
{
	public:
		p_queue()
		{
			start=NULL;
			rear=NULL;
		}
		void enqueue(int ele,int p);
		void dequeue();
		void display();
};
void p_queue::enqueue(int ele,int p)
{
	node *temp=new node;
	node *ptr,*ptr2;
	temp->priority=p;
	temp->data=ele;
	if(start==NULL || p<start->priority)
	{
		temp->next=start;
		start=temp;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL && ptr->next->priority<=p)
		{
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
	
	
}
void p_queue::dequeue()
{
	if(start!=NULL)
	start=start->next;
	else
	cout<<"underflow"<<endl;
}
void p_queue::display()
{
	node *ptr;
	ptr=start;
	cout<<"data  "<<"priority"<<endl ;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"      "<<ptr->priority<<endl;
		ptr=ptr->next;
	}
}

int main()
{
	p_queue p1;
	int n,p,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{    cout<<"element and priority"<<endl;
		cin>>x;
		cin>>p;
		p1.enqueue(x,p);
	}
	p1.display();
	p1.dequeue();
	p1.enqueue(12,14);
	p1.display();
}
