#include<iostream>
using namespace std;

class doubly
{
    struct node
    {
    int value;
    struct node *previous;
    struct node *next;
    }*start=NULL, *tail, *ptr, *new_node;

public:


    void beginning(int num)
    {
        if(start==NULL)
        {
            new_node = new node;
            new_node->value=num;
            new_node->previous=NULL;
            new_node->next=NULL;
            start=new_node;
        }
        else
        {
            new_node= new node;
            new_node->value=num;
            new_node->previous=NULL;
            new_node->next=start;
            start->previous=new_node;
            start=new_node;
        }


    }
    void ending(int num)
    {
        if(start==NULL)
        {
            new_node=new node;
            new_node->value=num;
            new_node->previous=NULL;
            new_node->next=NULL;
            start=new_node;
            tail=new_node;
        }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->previous=tail;
            new_node->next=NULL;
            tail->next=new_node;
            tail=new_node;
        }

    }
    void insert_begin(int num)
    {
        new_node=new node;
        new_node->value=num;
        new_node->previous=NULL;
        new_node->next=start;
        start->previous=new_node;
        start=new_node;
    }

    void insert_end(int num)
    {
        new_node=new node;
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        new_node->value=num;
        new_node->previous=ptr;
        new_node->next=NULL;
        tail->next=new_node;
        tail=new_node;
    }

    void before(int num, int given)
    {
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->value==given)
                break;
            ptr=ptr->next;
        }
        if(ptr==NULL)
            cout<<endl<<"Not in the list, "<<endl;
        else if(ptr->previous==NULL)
            beginning(num);
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->previous= ptr->previous;
            new_node->next=ptr;
            ptr->previous->next=new_node;
            ptr->previous=new_node;
        }
    }
    void after(int num, int given)
    {
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->value==given)
                break;
            ptr=ptr->next;
        }
        if(ptr==NULL)
            cout<<"Not in the list. "<<endl;
        else if (ptr->next==NULL)
               {
                   ending(num);
               }
        else
        {
            new_node=new node;
            new_node->value=num;
            new_node->previous=ptr->next;
            new_node->next=ptr->next;
            ptr->next=new_node;
            ptr->next->previous=new_node;
        }

    }
    void sorted(int num)
    {
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->value>num)
                break;
            ptr=ptr->next;

        }
        if(ptr==NULL)
            ending(num);
        else if (ptr->previous==NULL)
            {beginning(num);}
            else
            {
                new_node=new node;
                new_node->value=num;
                new_node->previous=ptr->previous;
                new_node->next=ptr;
                ptr->previous->next=new_node;
                ptr->previous=new_node;

            }

    }

    void del_begin()
    {
        ptr=start;
        if(start->next==NULL)

            {
                start=NULL;
                delete ptr;
            }
        else
        {
            start=ptr->next;
            start->previous=NULL;
            tail=ptr->previous;
            ptr->next=NULL;
            delete ptr;
        }

    }

    void del_end()
    {
        ptr=start;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
        }
        if(start->next==NULL)
            start=NULL;
        else
        {
            ptr->previous->next=NULL;
            ptr->previous=NULL;
            delete ptr;
        }

    }


    void show()
    {
        cout<<endl<<"The nodes are as followed: ";
        ptr=start;
        while(ptr!=NULL)
              {
                // cout<<ptr<<":";
                 cout<<ptr->value<<" ";
                    ptr=ptr->next;
              }
              cout<<endl;
    }

};

int main()
{
    doubly obj;
    int num,choice;
    char ch;

    do
    {
        cout<<"Enter 1 to create list"<<endl;
        cout<<"Enter 2 to display the list"<<endl;
        cout<<"Enter 3 to insert a number in the beginning"<<endl;
        cout<<"Enter 4 to insert a number in the end"<<endl;
        cout<<"Enter 5 to insert a number before a given number"<<endl;
        cout<<"Enter 6 to insert a number after a given number"<<endl;
        cout<<"Enter 7 to insert in the sorted list"<<endl;
        cout<<"Enter 8 to delete an element from the beginning"<<endl;
        cout<<"Enter 9 to delete an element from the end"<<endl;
        cout<<"Enter 10 to exit"<<endl;

        cin>>choice;
        switch(choice)
        {

    case 1:
        {


        cout<<"Enter B. for link list from beginning"<<endl;
        cout<<"Enter E. for link list from end"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 'B':
            {

            cout<<"Enter the number or -1 to exit: ";
            cin>>num;
            while(num!=-1)
            {
                obj.beginning(num);
                cout<<"Enter the number or -1 to exit: ";
                cin>>num;

            }
            break;
            }
        case 'E':
            {


            cout<<"Enter the number or -1 to exit: ";
            cin>>num;
            while(num!=-1)
            {
                obj.ending(num);
                cout<<"Enter the number or -1 to exit: ";
                cin>>num;
                //break;
            }
            break;
            }
        }


        break;
        }
    case 2:
            obj.show();
            break;

    case 3:
        cout<<"Enter number or -1 to exit: ";
        cin>>num;
        obj.insert_begin(num);
        break;

   case 4:
       cout<<"Enter number or -1 to exit: ";
       cin>>num;
       obj.insert_end(num);
       break;

   case 5:
    cout<<"Enter the number you want to add: ";
    cin>>num;
    int given;
    cout<<"Enter the element already in the list: ";
    cin>>given;
    obj.before(num,given);
    break;

   case 6:
       cout<<"Enter the number you want to add: ";
        cin>>num;
        //int given;
        cout<<"Enter the element already in the list: ";
        cin>>given;
        obj.after(num,given);
        break;

   case 7:
       cout<<"Enter the number you want to add: ";
       cin>>num;
       obj.sorted(num);
       break;

   case 8:
    obj.del_begin();
    break;

   case 9:
    obj.del_end();
    break;

        }
    }while(choice!=10);
    return 0;
}

