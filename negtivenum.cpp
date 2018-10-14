#include<iostream>
using namespace std;
class neg
{
	public:
		int n,a[20],count=0;
		void get()
		{   cout<<"total element "<<endl;
			cin>>n;
			cout<<"array "<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		
		void num()
		{
		
			for(int i=0;i<n;i++)
			{
			   if(a[i]<0)
			   {
			   	count++;
			   }	
			}
             cout<<"total -ve number found = "<<count<<endl;
             cout<<"-ve element: ";
			for(int i=0;i<n;i++)
			{
			   if(a[i]<0)
			   {
			   	cout<<a[i]<<",";
			   }	
			} 			
			
		}
};
 
int main()
{
	neg obj;
	obj.get();
	obj.num();
}
