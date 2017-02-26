#include <stdio.h>
#include <iostream>

using namespace std;

struct node{
	int val;
	struct node* left;
	struct node* right;
};

struct node* root = NULL;

void add(int num){
	struct node* newnode = new node();
	newnode->right=NULL;
	newnode->left=NULL;
	newnode->val=num;

	if(root==NULL){
		root = newnode;
	}
	else{
		struct node* temp1 = root;
		struct node* temp2 = root;
		while(temp2!=NULL){
			temp1 = temp2;
			if(temp1->val <num){
				temp2 = temp2->right;
			}
			else if(temp1->val >num){
				temp2 = temp2->left;
			}	
		}
		if(temp1->val > num){
			temp1->left= newnode;
		}
		else{
			temp1->right = newnode;
		}
	}
}


void inorder(struct node* head){
	if(head==NULL)
		return;
	else{
		inorder(head->left);
		cout<<head->val<<" ";
		inorder(head->right);
	}
}

int main(){
	add(5);
	add(6);
	add(7);
	add(3);
	add(9);
	add(1);
	inorder(root);
	cout<<endl;
	return 0;
}