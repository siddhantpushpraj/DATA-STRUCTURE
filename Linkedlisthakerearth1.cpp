#include<iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node *next;
};


    void insert(Node **head,int num)
    {   Node *ptr;
      
     Node *p=new Node;
     Node *tail;
        
        p->data=num;
        p->next=NULL;
        if(*head==NULL)
        {
          *head=p;
            tail=p;
        }
        else
        {
            ptr=*head;
            p->next=ptr;
            *head=p;
        }
        
    }
    void display(struct Node *head)
    {   int count=0;
    
        while(head!=NULL)  
      
      {    
            if(count%2==0)
            {cout<<head->data<<" ";}
            head=head->next;
            count++;
      }
        
        
}
int main() {
    
    int number,i,n;
    cin>>n;
    struct Node *head = NULL;
    for(i = n; i > 0; i--)
   {
	 cin>>number;
     insert(&head, number);
   }
	display(head);
    return 0;
}

