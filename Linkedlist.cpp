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
	void insert_beg();
	void display();
};
node *linked_list::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void linked_list::insert_beg()
{
	int ele;
	node *p,*ptr;
	cin>>ele;
	p=createnode(ele);
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
		cout<<"LL is empty";
	}
	tail=head;
	while(tail!=NULL)
	{
	cout<<tail->data<<"->";

	tail=tail->next;
    }

}


int main()
{
	int n=1;
	cout<<"enter 1 for input "<<endl<<"enter 2 for display"<<endl<<"enter 3 to exit "<<endl<<"enter 4 for insertion "<<endl;
	cin>>n;
	linked_list l1;
	while(n!=3)
    {
	if(n==1)
	{
	cout<<"enter linked_list element : "<<endl;
	l1.insert_beg();
	cout<<"enter choioce : "<<endl;
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
		
	}
}
return 0;
}
