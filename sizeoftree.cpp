#include<iostream>

using namespace std;
struct node 
{
	int key;
	struct node* left;
	struct node *right;	
};
struct node *root=NULL;
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
int size_tree(struct node* node)  
{   
  if (node==NULL)  
    return 0; 
  else     
    return(size_tree(node->left) + 1 + size_tree(node->right));   
} 
int getLeafCount(struct node* node) 
{ 
  if(node == NULL)        
    return 0; 
  if(node->left == NULL && node->right==NULL)       
    return 1;             
  else 
    return getLeafCount(node->left)+ 
           getLeafCount(node->right);       
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
	cout<<"size of tree"<<endl;
	int size1=size_tree(root);
	cout<<" "<<size1<<endl;
	int leaf=getLeafCount(root);
	cout<<"leaf of tree"<<endl;
	cout<<" "<<leaf<<endl;

}
