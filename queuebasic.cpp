#include<iostream>
using namespace std;

class queue
{
	int arr[30];
	int front,rear;
	public:
		queue()
		{
			front=rear=-1;
		}
		void enqueue(int,int);
		int dequeue();
		int front1();
		int rear1();
		bool isempty();
		 void display(int); 
};
void queue::display(int size)
{
	for(int i=0;i<(size);i++)
	{
		cout<<arr[i]<<endl;
	}
}
void queue::enqueue(int x,int size)
{   if(rear>=(size-1))
		cout<<"overflow"<<endl;
	if(rear<=(size-1))
	{
		
		if(front==-1 && rear ==-1)
		{   rear++;
			front++;
			arr[front]=x;
			arr[rear]=x;

		}
		else
		{   rear++;
			arr[rear]=x;
		}
	}
}
int queue::dequeue()
{
	if(front==rear)
	{   
	   cout<<arr[front]<<endl;
		front=rear=-1;
	}
	else
	{   
	    
		cout<<arr[front]<<endl;
		front++;
		
	}
}
int queue::front1()
{
	cout<<"element at front "<<arr[front]<<" index "<<front<<endl;
}
int queue::rear1()
{
	cout<<"element at rear "<<arr[rear]<<" index "<<front<<endl;
}

int main()
{   int size;
	cout<<"size of dequeue"<<endl;
	cin>>size;
	queue q1;
	int x,n;
	cout<<"1 for enter value in enqueue, 2 for dequeue ,3 front element and its index, 4 for rear element and index,5 for display "<<endl;
	cin>>x;
	while(x<=5)
	{
		if(x==1)
		{   
			cin>>n;
			q1.enqueue(n,size);
			cout<<"option"<<endl;
			cin>>x;
		}
		if(x==2)
		{   q1.dequeue();
			cout<<"option"<<endl;
			cin>>x;

		}
		if(x==3)
		{   
		    q1.front1();
			cout<<"option"<<endl;
			cin>>x;

		}
		if(x==4)
   		{	
   			q1.rear1();
			cout<<"option"<<endl;
			cin>>x;

		}
			if(x==5)
		{	
			q1.display(size);
			cout<<"option"<<endl;
			cin>>x;
		}
	}
	return 0;
}
