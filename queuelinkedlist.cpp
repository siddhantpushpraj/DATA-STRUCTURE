#include<iostream>
using namespace std;
#define MAX 10
struct node
{
int data;
struct node *next;	
};
struct queue
{
node *front,*rear;
queue()
   {
   front=NULL;
   rear=NULL;
   }
   
   node *createnode(int);
   void enqueue(int );
   void dequeue();
   void display();
   void front1();
   void rear1();
   	
};
node *queue::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void queue::enqueue(int size )
{  int element;
	for(int i=0;i<(size);i++)
	{   
	    if(size<MAX)
		{
		cout<<"linked list element"<<endl;
	    cin>>element;
	node *p,*ptr;
	p=createnode(element);
	if(front==NULL && rear==NULL)
	  rear=front=p;
    else
	{
		rear->next=p;
		rear=p;
	}
	}
	else 
	cout<<"overflow";
	}
}
void queue::dequeue()
{
	if(front==rear)
	 rear=front=NULL;
	else
	{
		cout<<front->data<<" deleted"<<endl;
		front=front->next;
	}
}
void queue::front1()
{
	cout<<front->data<<endl;
}
void queue::rear1()
{
	cout<<rear->data<<endl;;
}
int main()
{
	int size;
	cout<<"size of dequeue"<<endl;
	cin>>size;
	queue q;
	int x,n;
	cout<<"1 for enter value in enqueue, 2 for dequeue ,3 front element , 4 for rear  "<<endl;
	cin>>x;
	while(x<=4)
	{
		if(x==1)
		{   
		    
			q.enqueue(size);
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==2)
		{   q.dequeue();
			cout<<"option"<<endl;
			cin>>x;

		}
		if(x==3)
		{   
		    q.front1();
			cout<<"option"<<endl;
			cin>>x;

		}
		if(x==4)
   		{	
   			q.rear1();
			cout<<"option"<<endl;
			cin>>x;

		}
	}
	return 0;
}
