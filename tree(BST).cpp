#include<iostream>
using namespace std;
struct node 
{
	int key;
	struct node* left;
	struct node *right;	
};
struct node *root=NULL;
int search(node *root,int data)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->key==data)
	{
		return true;
	}
	else if(data<=root->key)
	{
		return search(root->left,data);
	}
	else
	{
		return search(root->right,data);
	}
}
node *createnode(int data)
{
	node *temp=new node;
	temp->key=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insert(node *ptr,int data)
{
	if(ptr==NULL)
	{
		ptr=createnode(data);
		return ptr;
	}
	else if (data<=ptr->key) 
	{
        ptr->left=insert(ptr->left, data);
    } 
	else 
	{
        ptr->right=insert(ptr->right,data);
    }
    
}
void inorder(node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	inorder(ptr->left);
	cout<<ptr->key<<endl;
	inorder(ptr->right);
}
void preorder(node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	cout<<ptr->key<<endl;
	inorder(ptr->left);
	inorder(ptr->right);
	
}
void postorder(node *ptr)
{
	if(ptr==NULL)
	{
		return;
	}
	inorder(ptr->left);
	inorder(ptr->right);
	cout<<ptr->key<<endl;
}
int main()
{	
	int size,data;
	cout<<"total element in tree"<<endl;
	cin>>size;

	for(int i=0;i<size;i++)
	{	 
		cin>>data;
		if(root==NULL)
		root=createnode(data);
		else
		insert(root,data);
	}
	cout<<"inorder tree"<<endl;
	inorder(root);
	
	cout<<"preorder tree"<<endl;
	preorder(root);
	
	cout<<"postorder tree"<<endl;
	postorder(root);	
	
	cout<<"data to search"<<endl;
	cin>>data;
	
	if(search(root,data))
	{
		cout<<"found"<<endl;
	}
	else
	cout<<"not found"<<endl;
}
