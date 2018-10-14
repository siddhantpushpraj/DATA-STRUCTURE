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
   void delbeg();
   void delend();
   void display();
    void insertbeg();
    void delbef();
    void delaft();
   	
};
void linked_list::delaft()
{
	int x;
	node *ptr1,*ptr3,*ptr2;
	cout<<"element deleted after"<<endl;
	cin>>x;
	ptr1=head;
	if(head==NULL)
	{
		cout<<"LL is empty"<<endl;
	}
	if(head!=NULL)
	{
		while(ptr1->data!=x && ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
			if(ptr1==NULL)
			{
				cout<<"element not present "<<endl;
				break;
			}
			
		}
		if(ptr1->next!=NULL)
		{
		ptr2=ptr1->next;
		ptr3=ptr2->next;
		ptr1->next=ptr3;
		delete ptr2;
	    }
	   
	    
	}
}
void linked_list::delbef()
{    int x;
	node *ptr1,*ptr3,*ptr2;
	cout<<"element deleted before"<<endl;
	cin>>x;
	ptr1=head;
	if(head==NULL)
	{
		cout<<"LL is empty"<<endl;
	}
	ptr2=ptr1;
	if(head->data==x)
	{
		cout<<"before "<<x<<" no element presrnt"<<endl;
	}
	
	if(head!=NULL && head->data!=x)
	{
		
		while(ptr1->next->data!=x)
		{
			ptr2=ptr1;
			ptr1=ptr1->next;
		}
    ptr3=ptr1->next;
	ptr2->next=ptr1->next;
	if(head->next->data==x)
	      head=head->next;

			}
}
void linked_list::delbeg()
{
node *ptr;
ptr=head;
if(head==NULL)
{
	cout<<"LL is empty"<<endl;
}
if(head!=NULL && head->next!=NULL)
{
head=ptr->next;

delete ptr;
}
if(head!=NULL && head->next==NULL)
{
head=NULL;
}
}
void linked_list::delend()
{
	node *ptr;
	ptr=head;
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	if(head!=NULL && head->next!=NULL)
	{
	
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
    if(head!=NULL && head->next==NULL)
    head==NULL;
    
    
    
}
    

}

node *linked_list::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void linked_list::insertbeg()
{
	int element;
	cout<<"linked list element"<<endl;
	cin>>element;
	node *p,*ptr;
	p=createnode(element);
	if(head==NULL)
	head=p;
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
int main()
{int n;    
linked_list l1;
     cout<<"enter choice"<<endl;
	
	cout<<"1 for deletion from beg, 2 from  end , 3 for display, 4 create node, 5 exit, 6 delete before,7 after"<<endl;
	cin>>n;
	
	while(n!=5)
	{
		if(n==1)
		{
			l1.delbeg();
			cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n==2)
		{
			l1.delend();
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
		{
			l1.insertbeg();
			cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n==5)
		break;
		if(n==6)
		{
			l1.delbef();
				cout<<"enter choice"<<endl;
			cin>>n;
			
		}
		if(n==7)
		{
			l1.delaft();
				cout<<"enter choice"<<endl;
			cin>>n;
		}
		if(n>8)
		{
			cout<<"enter choice"<<endl;
			cin>>n;
		}
	}
}
