#include<iostream>
using namespace std;
void hanoi(int n,char beg, char aux,char end)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<beg<<" to "<<end<<endl;
		return;
	}
	
	hanoi(n-1,beg,end,aux);
	cout<<"Move Disk "<<n<<" from "<<beg<<" to "<<end<<endl;
	hanoi(n-1,aux,beg,end);
}
int main()
{ 
int n;
cout<<"Enter no. of disks:";	
cin>>n; 
hanoi(n,'A','B','C');
return 0;
}
