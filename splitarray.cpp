#include<iostream>
using namespace std;
int main()
{ int i,j,n,a[10],flag=1,sum1=0,sum2=0,k;  
cout<<"element"<<endl;
cin>>n;
cout<<"enter"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
	
	for(i=0;i<n;i++)
	{   sum2=0;
		sum1=sum1+a[i];
		
		for(j=i+1;j<n;j++)
		{
			sum2=sum2+a[j];
			
			if(sum1==sum2)
			{
				flag=0;
			
				k=i;
				break;
			}
			if(sum1!=sum2)
			flag=1;
			
		}
	}

	cout<<"array1"<<endl;
	for(i=0;i<=k;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"array 2"<<endl;
   for(i=k+1;i<n;i++)
   cout<<a[i]<<" ";
}
