#include <stdio.h>
#include <iostream>

using namespace std;

struct tnode{
	int val;
	struct tnode* left;
	struct tnode* right;
};

struct dlnode{
	int dval;
	struct dlnode* next;
	struct dlnode* prev;
};

struct dlnode* head=NULL;

struct tnode* root =NULL;

void add(int key){
	struct tnode* newnode = new tnode();
	newnode->val = key;
	newnode->left =NULL;
	newnode->right=NULL;

	if(root==NULL){
		// cout<<newnode->val<<" **"<<endl;
		root=newnode;
	}
	else{
		struct tnode* temp1 = root;
		struct tnode* temp2 = root;
		while(temp1!=NULL){
			temp2= temp1;
			if(key < temp1->val){
				// cout<<"here1"<<endl;
				temp1 = temp1->left;
			}
			else{
				// cout<<"here2"<<endl;
				temp1 = temp1->right;	
			}
		}
		if(key < temp2->val){
			// cout<<"here11"<<endl;
			// cout<<temp2->val<<endl;
			temp2->left = newnode;
		}
		else{
			// cout<<"here22"<<endl;
			// cout<<temp2->val<<endl;
			temp2->right = newnode;
		}
	}
	return ;

}


// void inorder(struct tnode* temp){
// 	if(temp==NULL)
// 		return;

// 	inorder(temp->left);
// 	//cout<<temp->val<<endl;
// 	struct dlnode* temp = new dlnode();
// 	temp->dval = temp->val;
// 	if(head==NULL){
// 		temp->prev=NULL;
// 		temp->next=NULL;
// 		head = temp;
// 	}
// 	else{
// 		struct dlnode* tempn = head;
// 		while(tempn!=NULL){
// 			tempn= tempn->next;
// 		}
// 		tempn->next = temp;
// 		temp->prev = tempn;
// 		temp->next = NULL;
// 	}
// 	inorder(temp->right);
	
	
// }

void printdnode(){
	struct dlnode* li = head;
	while(li!=NULL){
		cout<<li->dval<<endl;
		li=li->next;
	}
}

int isBST(struct tnode* list, int min, int max){

	if(node==NULL){
		return 0;
	}
	else if(list->val > min && list->val < max){
		// if(list->left!=NULL){
			return isBST(list->left, min, list->val) && isBST(list->right, list->val, max);
		// }
		// else if(list->right!=NULL){
			// return isBST(list->right, list->val, max);	
		// }
	}	
	else{
		return -1;
	}

}


int main(){
	struct tnode* test = root;

	add(25);
	add(30);
	add(27);
	add(12);
	add(10);
	add(15);
	// inorder(root);
	// printdnode();
	cout<<" is bst val "<<isBST(root, INT_MIN, INT_MAX)<<endl;
	return 0;
}