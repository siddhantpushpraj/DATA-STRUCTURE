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
    void insertbeg();
	void insertend();
	void insertbef();
	void insertaf();
	void display();
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
void linked_list::insertend()
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
		ptr1->next=p;
		p->next=head;
		
	  }
}
int main()
{
	int n;
	linked_list l1;
	cout<<"1 for insertion at beg, 2 for insertion dispaly, 3 for exit,4 for insert at end,5 for insert after given node ,6 for insert before given node"<<endl;
	cin>>n;
	while(n!=3)
	{    
		if(n==1)
		{
			l1.insertbeg();
			cout<<"enter option"<<endl;
			cin>>n;
		}
		 if(n==2)
		{
			l1.display();
         	
	        cout<<endl<<"enter choice : "<<endl;
	        cin>>n;
		}
		 if(n==3)
      {
    	break;
	  }
	  if(n==4)
	      {
	      	l1.insertend();
			cout<<"enter option"<<endl;
			cin>>n;
		  } 
/*	  if(n==5)
	          {
	            l1.insert_aft();  	
	            cout<<"enter option"<<endl;
			    cin>>n;
			  }	    
		if(n==6)
		{
			l1.insert_bef();
		    cout<<"enter option"<<endl;
		    cin>>n;
		}
		if(n>6)
		{
			cout<<"invalid try again"<<endl;
			cin>>n;
		}
		
	}*/
}
}

