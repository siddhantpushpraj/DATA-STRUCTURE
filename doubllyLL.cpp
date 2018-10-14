#include<iostream>
using namespace std;
struct node
{
	node *pre;
	int data;
	node *next;
};
struct doubly_LL
{
	node *head;
	doubly_LL()
	{
		head=NULL;
	}
  node *createnode(int);
  void insertbeg();
  void display();
  void insertend();
  void insertaf();
  void insertbf();
};
node *doubly_LL::createnode(int x)
{
	node *temp=new node;
	temp->pre=NULL;
	temp->data=x;
	temp->next=NULL;
	return temp;
	
}
void doubly_LL::insertbeg()
{
	int ele;
	node *p;
	cin>>ele;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->next=head;
		head->pre=p;
		head=p;
	}
}
void doubly_LL::display()
{  node *ptr;
	if(head==NULL)
	cout<<"LL is empty"<<endl;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"<->";
		ptr=ptr->next;
	}
}
void doubly_LL::insertend()
{
	node *ptr,*p;
	int ele;
	cout<<"enter data"<<endl;
	cin>>ele;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=p;
	p->pre=ptr;
}
void doubly_LL::insertaf()
{
	node *ptr,*p,*ptr2;
	int ele,x;
	cout<<"enter data"<<endl;
	cin>>ele;
	cout<<"after node"<<endl;
	cin>>x;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	ptr=head;
	if(head!=NULL)
	{
	
	while(ptr->data!=x)
	{
		ptr=ptr->next;
	}
	if(ptr->next!=NULL)
  {
    ptr2=ptr->next;
	ptr->next=p;
	p->pre=ptr;
	p->next=ptr2;
	ptr2->pre=p;
   }
   if(ptr->next==NULL)
   {
   	ptr->next=p;
	p->pre=ptr;
   }
   }  
}
void doubly_LL::insertbf()
{
	node *ptr,*p,*ptr2;
	int ele,x;
	cout<<"enter data"<<endl;
	cin>>ele;
	cout<<"before node"<<endl;
	cin>>x;
	p=createnode(ele);
	if(head==NULL)
	{
		head=p;
	}
	ptr=head;
	if(head!=NULL)
	{
	 if(head->data!=x)
	{
	ptr2=ptr;
	ptr=ptr->next;
	while(ptr->data!=x)
	{   ptr2=ptr;
		ptr=ptr->next;
	}
	ptr2->next=p;
	p->pre=ptr2;
	p->next=ptr;
	ptr->pre=p;
   
  
    }
	if(head->data==x)
	  {
	  	p->next=head;
	  	head->pre=p;
	  	head=p;
	  }
	
}
}
int main()
{   doubly_LL l1;
	int n;
	int exit;

	cout<<"1 for enter element at beg,2 for at end,3 for display,4 for after,5 for exit,6 for before"<<endl;
		cin>>exit;
	while(exit!=5)
	{
	if(exit==1)
	{
	cout<<"total element"<<endl;
	cin>>n;
	cout<<"enter element"<<endl;
	for(int i=0;i<n;i++)
	{
		l1.insertbeg();
	}
		cout<<"enter choice"<<endl;
	cin>>exit;
   } 
   if(exit==2)
   {
   	l1.insertend();
   		cout<<"enter choice"<<endl;
	cin>>exit;
	}  
	if(exit==3)
	{
	l1.display();
	cout<<"enter choice"<<endl;
	cin>>exit;
    }
	if(exit==4)
	{
		l1.insertaf();
		cout<<"enter choice"<<endl;
	cin>>exit;
	}
	if(exit==6)
	{
		l1.insertbf();
		cout<<"enter choice"<<endl;
	cin>>exit;
	}      
    }
}
