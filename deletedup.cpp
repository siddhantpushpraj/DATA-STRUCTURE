#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;	
};
struct linked_list
{
	node *head,*tail;
	linked_list()
	{
		head=NULL;
		tail=NULL;
		
	}
node *createnode(int);
void insertele();
void deldup();
void display();	
};
node *linked_list::createnode(int x)
{
	node *temp=new node;;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void linked_list::insertele()
{
	node *p,*ptr;
	int element;
	cout<<"LL element"<<endl;
	cin>>element;
	p=createnode(element);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		ptr=head;
		head=p;
		p->next=ptr;
	}
}
void linked_list::display()
{
	if(head==NULL)
	{
		cout<<"LL is empty"<<endl;
	}
	tail=head;
	while(tail!=NULL)
	{
		cout<<tail->data<<"->";
		tail=tail->next;
	}
}
void linked_list::deldup()
{
	node *ptr1,*ptr2,*ptr3;
	ptr1=ptr2=head;
	if(head==NULL)
	cout<<"LL is empty"<<endl;
	if(head!=NULL)
	{
		while(ptr1->next!=NULL)
		{   ptr2=ptr1;
			while(ptr2->next!=NULL)
			{	
				if(ptr1->data==ptr2->next->data)
				{
					ptr2->next=ptr2->next->next;
				}
				else
				ptr2=ptr2->next;
			}
			if(ptr1->next==NULL)
			break;
			else
			ptr1=ptr1->next;
		}

}}


int main()
{int n;    
linked_list l1;
     cout<<"1 for insert element,2 for delete dup element,3 for display,4 for exit enter choice"<<endl;
	
	cout<<""<<endl;
	cin>>n;
	
	while(n!=4)
	{
		if(n==1)
		{
			l1.insertele();
			cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n==2)
		{
		l1.deldup()	;
		cout<<"duplicate element deleted enter choice"<<endl;
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
	
		if(n>=
		5)
		{
			cout<<"invalid choice try again"<<endl;
			cin>>n;
		}
	}
}


