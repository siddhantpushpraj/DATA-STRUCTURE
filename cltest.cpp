#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;	
};
struct circular_list
{
node *head,*tail;
circular_list()
{
	head=NULL;
	tail=NULL;
}
node *createnode(int);
void insert();
void del();
void display();
	
};

node *circular_list::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=temp;;
	return temp;
}
void circular_list::insert()
{
	node *ptr,*p;
	int ele;
	cout<<"enter data"<<endl;
	cin>>ele;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
		tail=p;	
	}
	ptr=head;
	if(head!=NULL)
	{
	p->next=head;
	tail->next=p;
	head=p;
	}
	
}
void circular_list::display()
{   
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	tail=head;
	if(head!=NULL)
	{
		while(tail->next!=head)
		{
			cout<<tail->data<<"->";
			tail=tail->next;
		}
		cout<<tail->data;
	}
}
void circular_list::del()
{
	node *ptr;
	ptr=head;
	if(ptr->next==head)
	head=NULL;
	while(ptr->next!=head)
	{
		ptr=ptr->next;
	}
	
	head=head->next;
   ptr->next=head;
}
int main()
{
	circular_list l1;
	int n;
	cout<<"1 for insertion,2 for deletion,3 for display,4 for exit"<<endl;
	cin>>n;
	while(n!=4)
	{
		if(n==1)
		{
			l1.insert();
			cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n==2)
		{
			l1.del();
			cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n==3)
		{
			l1.display();
			cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n==4)
		break;
		if(n>5)
		{
			cout<<"enter choice"<<endl;
			cin>>n;
		}
	}
}
