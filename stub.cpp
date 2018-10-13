#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;	
};
void createnode(Node **head,int num)
{
	Node *ptr=new Node;
	ptr->data=num;
	ptr->next=NULL;
	
}
void insert(Node **head)
{
	Node *ptr;
	int ele;
	cin>>ele;
	
	if(*head==NULL)
	{
		createnode(head,ele);
	}
	else
	{
		ptr=*head;
		ptr->next=*head;
		*head=ptr;
	}
}
void moveToFront(Node **head)
{
	
}
void printList(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data;
	}
}
int main()
{
	Node  *head=NULL;
	insert(&head);
	moveToFront(&head);
	printList(head);
	return 0;
}
