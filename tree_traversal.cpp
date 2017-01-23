#include <iostream>

using namespace std;

class treenode
{
	int data
	treenode* left;
	treenode* right;
};


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
	treenode* node;
	node=(treenode*)malloc(sizeof(treenode));
	node->data=3;
	node->left=NULL;
	node->right=NULL;

	inorder(node);
}