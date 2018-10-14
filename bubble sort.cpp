#include<iostream>
using namespace std;
int main()
{
	int a[40],n,i,j,temp;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{    if(a[i]<a[j])
		{
				temp=a[i];
			a[i]=a[j];;
			a[j]=temp;
		}
		}
	}
	for(i=0;i<n;i++)
	cout<<a[i];
	
}
