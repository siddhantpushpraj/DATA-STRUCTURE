#include<iostream>
using namespace std;

int main()
{
	int node,b,a;
	cout<<"node"<<endl;
	cin>>node;
	int ar[node][node];
	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			ar[i][j]=0;
		}
	}
		
	for(int i=0;i<node;i++)
	{	
		for(int j=0;j<node;j++)
		{	
			cout<<"node "; 
			cin>>a;
			cout<<"connected to ";
			cin>>b;
			
			if(a!=-1 && b!=-1)
				{
					ar[a][b]=ar[b][a]=1;
				
				}
			else
				break;
		}
	}
	for(int i=0;i<node;i++)
	{
		for(int j=0;j<node;j++)
		{
			cout<<ar[i][j]<<"  ";
		}
		cout<<endl;
		
	}
	char edge;
	cout<<"add edge"<<endl;
	cin>>edge;
	if(edge=='y' || edge=='Y' || edge=='N' || edge=='n')
	{
		for(int i=0;i<node;i++)
	{	
		for(int j=0;j<node;j++)
		{	
			cout<<"node "; 
			cin>>a;
			cout<<"connected to ";
			cin>>b;
			
			if(a!=-1 || b!=-1)
				{
					ar[a][b]=ar[b][a]=1;
				
				}
			if(a==-1 || b==-1)
			break;
		}
	}
	}

}
