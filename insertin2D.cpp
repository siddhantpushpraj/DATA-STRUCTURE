#include<iostream>
using namespace std;

int main()
{
	int r,i,j,r1,c1,c,elem,a[45][45];
	
	cout<<"enter row and column";
	cin>>r>>c;
	cout<<"enter element";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j];
		}
		cout<<" "<<endl;
	}	
	cout<<"enter row common";
	cin>>r1>>c1>>elem;
	for(i=r+1;i>r1;i--)
	{
		for(j=c+1;j>c1;j--)
		{
		    a[i][j]=a[i-1][j-1];
		}
	}
	a[r1-1][c1-1]=elem;
	cout<<"array";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j];
		}
		cout<<" "<<endl;
	}	
	
}
