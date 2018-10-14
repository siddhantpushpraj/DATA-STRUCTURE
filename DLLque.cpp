#include<iostream>
using namespace std;
class DLL
{
  class node 
  	{  public:
  		struct node *pre;
  		int data;
  		class node *next;
    };	
    public:
    	node *head,*tail;
    	DLL();
    	void insert();
    	void count();
    	void reverse();
    	void del();
    	void display();
    	void occ(int ,int );
};
DLL::DLL ()
{
	
	head=NULL;
	tail=NULL;
}
void DLL::occ(int count,int n)
{
	node *ptr,*ptr2;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==n)
		count++;
		ptr=ptr->next;
	}
	ptr=head;
	
	cout<<count<<endl;
	if(head!=NULL)
	{
		while(ptr->next!=NULL)
		{   ptr2=ptr;
			while(ptr2->next->next!=NULL)
			{	
				
				if(ptr->data==ptr2->next->data && ptr2->next->next!=NULL)
				{   
				    ptr2->next->next->pre=ptr2->next->pre;
					ptr2->next=ptr2->next->next;
					
				}
				else
				ptr2=ptr2->next;
				
			}
			if(ptr->data==ptr2->next->data && ptr2->next->next==NULL)
				{   
				    ptr2->next=NULL;
					
					
				}
			if(ptr->next==NULL)
			break;
			else
			ptr=ptr->next;
	}
	display();
}
}
void DLL::display()
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
void DLL::insert ()
{
	node *p=new node;
	node *ptr;
	int ele;
	
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
void DLL::count()
{
	node *ptr;
	int c=0;
	ptr=head;
	while(ptr!=NULL)
	{
		c++;
		ptr=ptr->next;
	}
	cout<<"size = "<<c<<endl;
}
void DLL::del()
{
	node *ptr,*ptr2;
	int x;
	cout<<"delete node greater than"<<endl;
	cin>>x;
	if(head==NULL)
	cout<<"DLL is empty"<<endl;
	ptr=head;

	if(head!=NULL)
	{   ptr=ptr->next;
		while(ptr->next!=NULL)
		{   
			if(ptr->data>x && ptr->next!=NULL)
			{   ptr2=ptr->next;
				ptr->pre->next=ptr->next;
				ptr->next->pre=ptr->pre;
				ptr=ptr2;
			}
			else 
			ptr=ptr->next;
		}
		if(ptr->data>x)
		{
			ptr->pre->next=NULL;
		}
		if(head->data>x && head->next!=NULL)
		{   
		    head=head->next;
			head->pre=NULL;
		}
		if(head->data>x && head->next==NULL)
		{   
		    head=NULL;
		}

		
	}
}
int main()
{
	DLL l1;
	int n,x;
	cout<<"1 for  insertion, 2 for size of linked list, 3 for reverse, 4 for delete node all greater,5 for display,6 for find occur and remove dup,7 for quit"<<endl;
	cin>>x;
	while(x!=6)
	{
		if(x==1)
		{
			cout<<"total element in DLL";
			cin>>n;
			cout<<"enter element"<<endl;
			for(int i=0;i<n;i++)
			l1.insert();
			l1.display();
			cout<<"option"<<endl;
			cin>>x;
			
		}
		if(x==2)
		{
			l1.count();
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==3)
		{
			cout<<"work in progress"<<endl;
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==4)
		{
			l1.del();
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==5)
		{
			l1.display();
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==6)
		{  int count=0,n;
		cout<<"enter num to find occ of number";
		cin>>n;
			l1.occ(count,n);
			cout<<"option"<<endl;
			cin>>x;
		}
		
		
	}
}
