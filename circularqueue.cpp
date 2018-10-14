#include<iostream>
using namespace std;
class Queue
{
	int a[30];
	int f,r;
	public:
		Queue()
		{
			f=-1;
			r=-1;
		}
	    void enqueue(int);
	    void display();
        int dequeue();
	    int front();
	    int rear();
	    bool isEmpty();
};
int Queue::front()
{
	return a[f];
}
int Queue::rear()
{
   return a[r];	
}
int Queue::dequeue()
{
	f++;
	return f;
}
bool Queue::isEmpty()
{
	if(r==-1 && f==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Queue::enqueue(int x)
{
	if(f==-1 && r==-1)
	{
		f++;
		r++;
		a[f]=x;
	}
	else if(r!=4)
	{
		if(r+1==f)
		{
			cout<<"Overflow";
		}
		else
		{
		r++;
		a[r]=x;
	}
	}
		else if(r==4)
	{
		r=0;
		if(r!=f)
		{
		a[r]=x;
	}
		else
		cout<<"Overflow";
	}
}

void Queue::display()
{
	if(f==0)
	{
	for(int i=0;i<=r;i++)
	{
		cout<<a[i];
	}
	cout<<a[0];
}
else
{
	for(int i=f;i<5;i++)
	{
		cout<<a[i];
	}
	if(r==0)
	cout<<a[r];
	else
	{
		for(int i=0;i<=r;i++)
		cout<<a[r];
	}
}
}
int main()
{
	Queue obj_1;
	int a,choice;
	while(choice!=6)
	{
		cin>>choice;
		switch(choice)
		{
			case 1:
				cin>>a;
				obj_1.enqueue(a);
				break;
			case 2:
				obj_1.display();
				break;
			case 3:
				if(obj_1.isEmpty())
				cout<<"Empty";
				else
				cout<<"Not Empty";
				break;
			case 4:
				obj_1.dequeue();
				break;
			case 5:
				cout<<obj_1.front()<<" "<<obj_1.rear();
		}
	}
	return 0;
}
