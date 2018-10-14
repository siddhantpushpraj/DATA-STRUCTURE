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
  void insertsort();
void insert_beg();
  void display();
  void sort();
   	
};
node *linked_list::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
   

void linked_list::sort()
{
	node *ptr1,*ptr2;
	int temp;
	
	ptr1=head;
	
	while(ptr1->next!=NULL)
	{   ptr2=ptr1->next;
		while(ptr2!=NULL)
		{
			if(ptr1->data>ptr2->data)
			{
				temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
				
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
}

void linked_list::insert_beg()
{
	int element;
	
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
void linked_list::insort()
{
	node *ptr;
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
{int n,x;
linked_list l1;
cout<<"2 for dispaly,3 for insert ,4 for exit,5 for sort"<<endl;
cin>>n;
while(n!=4)
{
  if(n==1)
{
cout<<"enter choice"<<endl;
	cin>>n;
}
if(n==2)
{
	l1.display();
	cout<<"enter choice"<<endl;
	cin>>n;
}
if(n==3)
{  cout<<"total"<<endl;
cin>>x;
cout<<"linked list element"<<endl;
for(int i=0;i<x;i++)
	l1.insert_beg();
    l1.display();
	 
	cout<<"enter choice"<<endl;
	cin>>n;
}
if(n==4)
break;
if(n==5)

{   
    l1.sort();
	cout<<"enter choice"<<endl;
	cin>>n;
}
if(n>6)

{   
    
	cout<<"enter choice"<<endl;
	cin>>n;
}
}
}

