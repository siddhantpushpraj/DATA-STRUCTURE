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
		tail=NULL;
		head=NULL;
	}
	
	node *createnode(int);
    void delbeg();
   void delend();
   void display();
    void insertbeg();
    void delbef();
    void delaft();
	
};
node *linked_list::createnode(int x)
{
node *temp=new node;
temp->data=x;
temp->next=temp;
return temp;
}
void linked_list::insertbeg()
{
	node *ptr1,*ptr2,*p;
	int element;
	cout<<"enter data"<<endl;
	cin>>element;
	p=createnode(element);
	
    if(head==NULL)
	{
	 head=p;
	}
	
	  ptr1=head;
	if(head!=NULL)
	{   
	     
		while(ptr1->next!=head)
		{   
			ptr1=ptr1->next;
		}
		
		p->next=head;
		ptr1->next=p;
		head=p;
		cout<<endl;
	}
}
void linked_list::display()
{ 
	if(head==NULL)
	{
		cout<<"LL is empty"<<endl;
	}
	
	tail=head;
	if(head!=NULL)
	{  
	while(tail->next!=head)
	{
	cout<<tail->data<<"->";
	tail=tail->next;
   }
   cout<<tail->data<<"->"<<endl;
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
if(ptr->next==head)
{
	head=NULL;
}

if(head!=NULL & ptr->next!=head)
{
	while(ptr->next!=head)
	{
		ptr=ptr->next;
	}
   head=head->next;
   ptr->next=head;
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
	if(ptr->next==head)
	head=NULL;
	
	if(head!=NULL && ptr->next!=head)
	{
		while(ptr->next->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=head;
	}
}

void linked_list::delaft()
{
	node *ptr;
	int x;
	cout<<"delet after"<<endl;
	cin>>x;
	ptr=head;
	if(head!=NULL)
	{
		while(ptr->data!=x)
		{
			ptr=ptr->next;
		}
		ptr->next=ptr->next->next;
	}
 } 
  void linked_list::delbef()
  {
  	node *ptr;
  	int x;
  	cout<<"delete befor"<<endl;
  	cin>>x;
  	ptr=head;
  	if(head!=NULL && ptr->next->data==x)
  	   {
		 while(ptr->next!=head)
		 {
		 	ptr=ptr->next;
		 }
		 head=head->next;
		 ptr->next=head;
	   }
  	if(head!=NULL && ptr->next->data!=x)
  	{
  	 while(ptr->next->data!=x)	
  	 {
  	 ptr=ptr->next;	
	 }
	 ptr->next=ptr->next->next;
	}
  }
int main()
{
int n;    
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
			l1.display();
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

