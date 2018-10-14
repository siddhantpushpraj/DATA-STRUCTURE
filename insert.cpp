#include<iostream>
using namespace std;
class INS
{
public:
	int n,a[100],elem,elem1, i,p;
	void f()
	{   cout<<"total "<<endl;
		cin>>n;
		for( i=0;i<n;i++)
	{
		cin>>a[i];
	}
	}
void srch();
void insertb();	
void inserta();
};
void INS::srch()
{   int flag=0;
	cout<<"given element and inserting element"<<endl;
	cin>>elem>>elem1;
	for(i=0;i<n;i++)
	{
		if(a[i]==elem)
		{
			flag=1;
			i=i+1;
			p=i;
			cout<<"pos of element is "<<i<<endl;
			break;
		}
	}
	
	
	if(flag==0)
	cout<<"element not found";
}
void INS::insertb()
{
	for( i=n+1;i>=p;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=elem1;
	for(int i=0;i<n+1;i++)
	cout<<a[i]<<endl;
}
void INS::inserta()
{
		for( i=n+1;i>=p+1;i--)
	{
		a[i]=a[i-1];
	}
	a[p]=elem1;
	for(int i=0;i<n+1;i++)
	cout<<a[i]<<endl;
}
int main()
{   int opt;
	INS d;
	d.f();
	d.srch();
	cout<<"1 for before insertion and 2 for after "<<endl;
	cin>>opt;
	if(opt==1)
	d.insertb();
	if(opt==2)
	d.inserta();
	return 0;
}
