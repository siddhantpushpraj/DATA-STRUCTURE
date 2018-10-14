#include<iostream>
using namespace std;
class ARR
{
public:
int i,pos,a[10];
 void create();
 void delpos();
 void delelem();
 void out();	
};
void ARR::create()
{
	for(int i=0;i<5;i++)
	cin>>a[i];
}
void ARR::delpos()
{
cout<<"position"<<endl;
cin>>pos;
if(pos<=5)
	{
	for(int i=pos-1;i<=5;i++)
	a[i]=a[i+1];
    }
    
else
cout<<"out of range";	
	
}
void ARR::out()
{
		for(int i=0;i<pos;i++)
	    cout<<a[i];
}
void ARR::delelem()
{
	
}
int main()
{
	ARR obj;
	obj.create();
	obj.delpos();
	obj.delelem();
	obj.out();
	
}				
