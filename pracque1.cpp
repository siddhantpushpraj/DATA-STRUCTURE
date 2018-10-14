#include<iostream>
using namespace std;
class node
{  public:
	int data;
	struct node *next;
};
class LL
{
	public:
node *head,*tail;
LL()
{
head=NULL;
tail=NULL;	
}
void insert()
{
	node *p=new node,*ptr;
	int x;
	cin>>x;
	p->data=x;
	p->next=NULL;
	if(head==NULL)
	{
		head=p;
		tail=p;
	//	cout<<"okk"<<endl;
	}
	else
	{
		tail->next=p;
		tail=p;
	//	cout<<"ok1"<<endl;
	}
	
	
}
void display()
{
	node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}
void swap(int);

};
void LL::swap(int n)
{  int temp;
	node *ptr,*ptr2;
	ptr=head;
	ptr2=ptr->next;
	if(n>1)
	{
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(i%2==0 && j==i+1)
			{
				temp=ptr->data;
				ptr->data=ptr2->data;
				ptr2->data=temp;
				if(ptr->next==NULL || ptr2->next==NULL)
				{
					break;
				}
				else if(ptr2->next->next!=NULL)
				{
					ptr=ptr2->next;
					ptr2=ptr->next;
				}
			}
		}
	}

	}
}

int main()
{
	int n;
	LL l1;
	cout<<"total element"<<endl;
	cin>>n;
	cout<<"LL Data"<<endl;
	for(int i=0;i<n;i++)
	l1.insert();
	l1.display();
//	if(n>1)
	l1.swap(n);
	cout<<"after swap alternate element"<<endl;
	l1.display();
}
