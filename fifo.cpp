#include<iostream>
using namespace std;
class fifo
{
public:
	int p[50],n;;
	int a[50],d=0;
	void get()
	{
		cin>>n;
	for(int i=0;i<n;i++)
   {	 cout<<"burst time for process "<<i<<" ";
         cin>>p[i];
         cout<<"arriving time for process "<<i<<" ";
         cin>>a[i];
     
	}
	
		
	}
	void cal()
	{
		for(int i=1;i<n;i++)
	d=p[i]+d-a[i];
	d=d/n;
	cout<<d;
	}
	
};
int main()
{
fifo obj;
obj.get();
obj.cal();
	
} 
