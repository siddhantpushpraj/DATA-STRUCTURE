#include<iostream>
using namespace std;
class doubly_LL
{
	struct node
	{    struct node *pre;
		int data;
		struct node *next;
	};
	public:
		node *head,*tail;
		doubly_LL();
		void createnode(int);
		void insertbeg();
		void display();
		void deletebeg();
		void deleteend();
		void given();
		void deleteaf();
		void deletebf();
		
		
		
};
doubly_LL::doubly_LL()
{
	head=NULL;
	tail=NULL;
}
void doubly_LL::given()
{
	node *ptr;
	cout<<"given node"<<endl;
	int x;
	cin>>x;
	if(head==NULL)
	cout<<"NO element present"<<endl;
	ptr=head->next;
	if(head!=NULL)
	{  
	    
		while(ptr!=NULL)
		{  
				if(ptr->data==x && ptr->next!=NULL)
			{
				ptr->next->pre=ptr->pre;
				ptr->pre->next=ptr->next;
				
				delete ptr;
				break;
			}
			if(ptr->data==x && ptr->next==NULL)
			{  
				ptr->pre->next=NULL;
				break;	
			}
			
			ptr=ptr->next;
			
		}
		if(head->data==x)
				{
				head=head->next;
				head->pre=NULL;
				}
		
	}
	
     	
   
}
void doubly_LL::insertbeg()
{
	int ele;
	node *p=new node,*ptr;
	cin>>ele;
	p->pre=NULL;
   p->data=ele;
   p->next=NULL;
	if(head==NULL)
	{
	head=p;
    tail=p;
	}
	else
   {
	ptr=head;
	p->next=ptr;
	ptr->pre=p;
	head=p;
   }  
}
void doubly_LL::deletebeg()
{   node *ptr;
    if(head==NULL)
    {
    	cout<<"LL is emplty"<<endl;
	}
	
    if(head!=NULL)
	{ 
	ptr=head->next;
	ptr->pre=NULL;
	head=ptr;
    }
}
void doubly_LL::deleteend()
{
	if(tail!=NULL)
	{
		tail=tail->pre;
	    tail->next=NULL;
	}
}
void doubly_LL::display()
{
	node *ptr;
	if(head==NULL)
	cout<<"LL is empty"<<endl;
	ptr=head;
	if(head!=NULL)
	{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"<->";
		ptr=ptr->next;
	}
	cout<<endl;
    }
}
void doubly_LL::deleteaf()
{
	int x;
	cout<<"delete after node"<<endl;
	cin>>x;
	node *ptr;
	ptr=head;
	if(head==NULL)
	cout<<"LL is empty"<<endl;
	if(head!=NULL)
	{
		while(ptr->data!=x && ptr->next!=NULL)
		{
			ptr=ptr->next;
		    	
		}
		
		if(ptr->next!=NULL)
	    {
		if(ptr->next->next!=NULL)
		{       ptr=ptr->next;
	          	ptr->next->pre=ptr->pre;
				ptr->pre->next=ptr->next;
				
				delete ptr;
		}
		
		if(ptr->next->next==NULL)
		{       
		ptr->next=NULL;
		}
	    }
	}
	
}
void doubly_LL::deletebf()
{
	node *ptr;
	int x;
	cout<<"delete befor"<<endl;
	cin>>x;
	ptr=head;
	if(head->next->data==x)
	{
	   ptr=ptr->next;
	   	ptr->pre=NULL;
	   	head=ptr;
	}
	if(head->next->data!=x)
	{  
		while(ptr->next->data!=x)
		{
			ptr=ptr->next;
		}
		ptr->pre->next=ptr->next;
			ptr->next->pre=ptr->pre;
			delete ptr;
	}
}
int main()
{
	doubly_LL l1;
    int n;
    
    int x;
    cout<<"1 for insertion ,2 delete from beg, 3 from end,4 for end,5 for display,6 for delete given node, 7 for delete after a node, 8 for before a node  "<<endl;
    cin>>x;
    while(x!=4)
  {
	  if(x==1)
    {
    	cout<<"total element"<<endl;
        cin>>n;
   cout<<"enter data"<<endl;
    for(int i=0;i<n;i++)
    l1.insertbeg();
    l1.display();
    cout<<"enter choice"<<endl;
    cin>>x;
    }
    
    if(x==2)
    {
	l1.deletebeg(); 
	cout<<"enter choice"<<endl;
    cin>>x;
    }
	if(x==3) 
    {
	l1.deleteend();
	cout<<"enter choice"<<endl;
    cin>>x;
    }
   if(x==5)
   { 
       l1.display();
       cout<<"enter choice"<<endl;
       cin>>x;
   }
   if(x==6)
   { 
       l1.given();
       cout<<"enter choice"<<endl;
       cin>>x;
   }
   if(x==7)
   {  l1.deleteaf();
   	 cout<<"enter choice"<<endl;
    cin>>x;
   	}
   	if(x==8)
   {  l1.deletebf();
   	 cout<<"enter choice"<<endl;
    cin>>x;
   	}
   	if(x>=9)
   {
   	 cout<<"enter choice"<<endl;
    cin>>x;
   	}
   	if(x==4)
   	break;
  }
}

