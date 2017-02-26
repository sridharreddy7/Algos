#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

struct node{
	int val;
	struct node *left;
	struct node *right;
};

struct node* invert(struct node* root){
	cout<<"here"<<endl;
	return root;
}
void print(struct node *head){
	if(head==NULL)
		return;
		print(head->left);
		cout<<head->val<<" ";
		print(head->right);
	
}
int main(){
	struct node *root =NULL;
	struct node *newnode = new node;
	root = newnode;
	newnode->val = 4;
	newnode->left->val=2;
	newnode->right->val=7;
	newnode->left->left->val=1;
	newnode->left->right->val=3;
	newnode->right->left->val=6;
	newnode->right->right->val=9;
	//print(newnode);
	// invert(root);
	return 0;
}