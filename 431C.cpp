#include <iostream>

using namespace std;

struct treenode
{
	int data
	treenode* left;
	treenode* right;
}node;


void inorder(treenode node)
{
		if(node!=NULL)
		{
			inorder(node->left);
			cout<<node->data;
			inorder(node->right);
		}
}

void postorder(treenode node)
{
	if(node!=NULL)
	{
		cout<<node->data;
		postorder(node->left);
		postorder(node->right);
	}
}

int main()
{
	
}