
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

struct Node *head=NULL;
void insert(int x)
{
    Node *p=new Node;
    Node *ptr;
     p->data=x;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        ptr=head;
        p->next=ptr;
        head=p;
    }
}
void display()
{
 Node *ptr;
    ptr=head;
int x; 
    while(ptr->next!=NULL)
    {
        if(ptr->data==ptr->next->data)
        {
            x=ptr->data;
            while(ptr->data==x)
            {
                ptr=ptr->next;
            }
            
        }
        else
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        
    }
    cout<<ptr->data;
    
}
int main() {
     // Node head;
      int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
      display();
    return 0;
}
