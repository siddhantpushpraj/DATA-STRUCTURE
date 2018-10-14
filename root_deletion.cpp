#include<iostream>
using namespace std;
struct node
{
	int key;
	struct node *left;
	struct node *right;	
};
struct node *root=NULL;
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
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
node *delete_root(node *root,int data)
{
	
    if (root == NULL) 
	return root; 
    
	if (data < root->key) 
        {	
        	cout<<root->key<< " 1"<<endl;
        	root->left = delete_root(root->left, data); 
        	cout<<root->key<< " 4"<<endl;
		}
    else if (data > root->key) 
        {	 
        	cout<<root->key<< " 2"<<endl;
        	root->right = delete_root(root->right, data);
			cout<<root->key<< " 3"<<endl; 
		}
  
    else
    {    
    	cout<<root->key<< " 6"<<endl; 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right;
			//cout<<temp->key<< " temp_key right"<<endl;  
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left;
			//cout<<temp->key<< " temp_key left"<<endl; 
            free(root); 
            return temp; 
        } 
        else
        {
        	struct node* temp = minValueNode(root->right); 
  		
        root->key = temp->key; 
        root->right = delete_root(root->right, temp->key); 
		}
    } 
    return root; 
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
	cout<<"data to delete"<<endl;
	cin>>data;
	delete_root(root,data);
	
	cout<<"inorder tree"<<endl;
	inorder(root);
	
	cout<<"preorder tree"<<endl;
	preorder(root);
	
	cout<<"postorder tree"<<endl;
	postorder(root);	
	
}

