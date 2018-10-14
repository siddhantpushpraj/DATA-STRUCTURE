#include<iostream>
using namespace std;
int main()
{
int a[20][20],m[20],n,i,j,temp;
cout<<"no of arrays"<<endl;
cin>>n;
for(j=0;j<n;j++)	
{
	cout<<" element in "<<j<<"array "<<endl;
	cin>>m[j];
	for(i=0;i<m[j];i++)
	{
		cin>>a[j][i];
	}
}
for(j=0;j<n;j++)
{
	for(i=0;i<m[j];i++)
	{
		for(int k=0;k<m[j];k++)
	{
		if(a[j][i]<a[j][k])
	{
		temp=a[j][k];
		a[j][k]=a[j][i];
		a[j][i]=temp;
	}
   }  }    
}

for(j=0;j<n;j++)	
{
	
	for(i=0;i<m[j];i++)
	{
	cout<<a[j][i];
	}
	cout<<endl;
}
}
