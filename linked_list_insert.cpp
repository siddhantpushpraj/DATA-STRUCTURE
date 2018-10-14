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
   void insertbeg();
   void insert_aft();
   void insert_bef();
   void insert_end();
   void display();
   	
};
node *linked_list::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void linked_list::insert_bef()
{
int element,x;
	cout<<"linked list element"<<endl;
	cin>>element;
	node *p,*ptr1,*ptr2;
	p=createnode(element);
	cout<<"insert after element"<<endl;
	cin>>x;
	ptr1=head;
	while(ptr1->next->data!=x)
	{
     ptr1=ptr1->next;
	}
	ptr1->next=p;
	p->next=ptr2;
		
}
void linked_list::insert_aft()
{
	int element,x;
	cout<<"linked list element"<<endl;
	cin>>element;
	node *p,*ptr1,*ptr2;
	p=createnode(element);
	cout<<"insert after element"<<endl;
	cin>>x;
	ptr1=head;
	while(ptr1->data!=x)
	{
		ptr1=ptr1->next;
	}
	ptr2=ptr1->next;
	ptr1->next=p;
	p->next=ptr2;
}
void linked_list::insert_end()
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
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=p;
	}
	
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
   //cout<<tail->next->data;
	tail=tail->next;
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
			l1.display();
			cout<<"enter option"<<endl;
			cin>>n;
		}
		 if(n==2)
		{
			l1.display();
         	cout<<"X";
	        cout<<endl<<"enter choice : "<<endl;
	        cin>>n;
		}
		 if(n==3)
      {
    	break;
	  }
	  if(n==4)
	      {
	      	l1.insert_end();
			cout<<"enter option"<<endl;
			cin>>n;
		  } 
	  if(n==5)
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
		
	}
}
