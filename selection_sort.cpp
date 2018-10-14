#include<iostream>
using namespace std;
void selectionsort(int A[],int n)
{
	int i,k,j,temp,min;
	for(int i=0;i<n;i++)
	{     	
		min=A[i];
		k=i;
		for(int j=i;j<n;j++)
		{    
		
			if(min>A[j])
			{
				min=A[j];
				k=j;
			}
		}
	if(k!=i)
	{
			A[k]=A[i];
			A[i]=min;
	}
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}
int main()
{
	int arr[20],s;
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,s);
	return 0;
}
