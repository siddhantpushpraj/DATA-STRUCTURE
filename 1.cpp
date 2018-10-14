#include<iostream>
using namespace std;
class a
{
	public:
	int i;
	int a[10];
	int f()
		{
	
	for( i=0;i<3;i++)
	{
		cin>>a[i];
	}
	int n=i;
	int e,p;
	cout<<"enter element and pos";
	cin>>e>>p;
	for( i=n+1;i>=p;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=e;
	for(int i=0;i<n+1;i++)
	cout<<a[i]<<endl;
	return 0;
		}
		
};
int main()
{
	a d;
	d.f();
}
