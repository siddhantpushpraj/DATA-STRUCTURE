#include<iostream>
using namespace std;
struct Node
{
	int info;
	struct Node *link;
};
struct C_Queue
{
	struct Node *f,*r;
}
;
void enque(C_Queue *q1,int ele)
{
	//write code
	
	q1->info=ele;
	q1->link=q1;
	if(f==NULL && r==NULL)
	{
		r=f=q1
		f->link=f;
	}
	else
	{
		r->link=p;
		r=p;
		r->link=f;
	}
}
void dequee(C_Queue *q1)
{
	// write code
}
void display(struct C_Queue *q1)
{
	//write code
}
int main()
{
	C_Queue *q=new Node;
	q->f=q->r=NULL;
	enque(q,10);
}
