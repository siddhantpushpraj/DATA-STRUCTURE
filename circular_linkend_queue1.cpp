#include<iostream>
using namespace std;

struct Node
{
	int info;
	struct Node *link;
};
struct C_queue
{
	struct Node *f,*r;
};

void enqueue1(C_queue *q1,int ele)
{
    Node *temp=new Node;
	temp->info=ele;
	temp->link=temp;
	if(q1->f==NULL)
	{
		q1->f=temp;
	}
	else
	q1->r->link=temp;
	q1->r=temp;
	q1->r->link=q1->f;	
}

void dequeue1(C_queue *q1)
{
	Node *n=q1->f;
	while(n->link!=q1->f)
	{
		n=n->link;
	}
	q1->f=q1->f->link;
	n->link=q1->f;
}

void Display(struct C_queue *q1)
{
    if(q1->f==NULL)
	{
		cout<<"cir_l_l is empty"<<endl;
	}
	else
	{
	Node *pt=q1->f;
	while(pt->link!=q1->f)
	{
	cout<<pt->info<<" ";
	pt=pt->link;	
    }
    cout<<pt->info<<" ";
}
}

int main()
{
	C_queue *q = new C_queue;
	q->f=q->r = NULL;
	enqueue1(q,10);
	enqueue1(q,20);
	enqueue1(q,30);
	enqueue1(q,40);
	enqueue1(q,50);
	Display(q);
	dequeue1(q);
	Display(q);
	dequeue1(q);
	Display(q);
}
