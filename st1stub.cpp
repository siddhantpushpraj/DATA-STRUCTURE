#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class cl
{
	public:
	node *dis(struct node* start,int data);
	node *d(struct node* start);
	
};
struct node *cl::dis(struct node* start,int ele)
{   
     node *ptr;
	node *p=new node;
	p->data=ele;
	p->next=NULL;
	
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
struct node *cl::d(struct node *start)
{
	while(start!=NULL)
	{
		cout<<start->data<<endl;
		start=start->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	cl c;
	struct node *start=NULL;
	int n,data;
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>data;
		if(start==NULL)
		{
			start=c.dis(start,data);
		}
		else
		{
		c.dis(start,data);
		}

	}
	c.d(start);
	return 0;
}
