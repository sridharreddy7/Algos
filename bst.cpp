#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;

struct node{
	int val;
	struct node *left;
	struct node *right;
};
queue<struct node*> qu;

struct node *root =NULL;
struct node *testnode = root;

void addNode(int key){
	struct node *newnode = new node;
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->val=key;
	struct node* temp1 = root;
	struct node* temp2 = root;
	if(root==NULL){
		root=newnode;
		return;
	}

	else{
		
		while(temp2!=NULL){
			temp1=temp2;
			if(key > temp1->val){
				temp2 = temp2->right;
			}
			else{
				temp2 =temp2 ->left;
			}
		}
		if(key < temp1->val){
			temp1->left = newnode;
			// cout<<"this number added to left "<<temp1->val<<endl;
		}
		else{
			temp1->right = newnode;	
			// cout<<"this number added to right   "<<temp1->val<<endl;
		}
	}
}

void print(struct node* head){
	if(head==NULL){
		return;
	}
	print(head->left);
	cout<<head->val<<endl;
	print(head->right);
}

// bool isBST(struct node *head){
// 	return boolBST(head, INT_MIN, INT_MAX);
// }

// bool boolBST(struct node* head, int min, int max){
// 	int flag=0;
// 	if(head==NULL){
// 		return true;
// 	}
// 	if(!(head->data > min && head->data < max)){
// 		return false;
// 	}
// 	boolBST(head->left, min, head->data-1);
// 	boolBST(head->right, head->data+1, max);
// }

void LevelOrder(struct node * head)
{
  struct node *temp =head;
  queue<struct node*> myq;
  
  if(myq.size()==0){
  	
    cout<<temp->val<<" ";
    struct node *sri = temp;
    if(sri->left !=NULL)
    	 myq.push(temp->left);
	if(sri->right !=NULL)
   		 myq.push(temp->right);
    
     
     
  }
  while(myq.size()>0){
  	// cout<<"here"<<endl;
    cout<<myq.front()->val<<" ";
    struct node *sri = myq.front();
   	if(sri->left !=NULL)
    	myq.push(sri->left);
	if(sri->right !=NULL)
   		myq.push(sri->right);
    myq.pop();
   }
   cout<<endl;
  return;
}
int height(struct node *head){
	if(head==NULL){
		return 0;
	}
	return 1+max(height(head->left),height(head->right));
}

int minHeight(struct node* head){
	if(head==NULL){
		return 0;
	}
	return 1+min(minHeight(head->left), minHeight(head->right));
}

void topview(struct node *head){
	vector<int>left;
	vector<int> right;
	while(head!=NULL){
		left.push_back(head->val);
		// if(head->left!=NULL)
			head = head->left;
	}
	head = root;
	head = head->right;
	while(head!=NULL){
		right.push_back(head->val);
		head= head->right;
	}
	reverse(left.begin(),left.end());
	for(vector<int>::iterator i=left.begin();i<left.end();i++){
		cout<<*i<<" ";
	}
	for(int i=0;i<right.size();i++){
		cout<<right[i]<<" ";
	}
	return;
}


void rightViewUtil(struct node* headNode, int level, int *max_level){
	if(headNode==NULL){
		return;
	}
	if(*max_level < level){
		cout<<headNode->val<<endl;
		*max_level = level;
	}
	// cout<<"hehrhe"<<endl;
	rightViewUtil(headNode->right, level+1, max_level);
	rightViewUtil(headNode->left, level+1, max_level);
	// rightViewUtil(headNode->right, level+1, max_level);

}

void rightView(struct node* head){
	// if(head!=NULL){
	// 	cout<<"here"<<endl;
	// 	cout<<head->val<<" ";
	// 	if(head->right!=NULL){
	// 		qu.push(head->right);
	// 	}
	// 	if(head->left!=NULL){
	// 		qu.push(head->left);
	// 	}
	// 	while(!qu.empty()){
	// 		struct node* rr = qu.front(); qu.pop();
	// 		if(rr->right==NULL && rr->left==NULL){
	// 			cout<<rr->val<<endl;
	// 		}
	// 		qu.pop();
	// 	}
	// }
	// if(head->right==NULL){
	// 	if(head->left!=NULL)
	// 		rightView(head->left);
	// 	else
	// 		return;
	// }
	// else{
	// 	rightView(head->right);
	// }
	// return;

	int max_level = -1;
	rightViewUtil(head, 1, &max_level);

}



struct node * invertTree(struct node *tempp){
	// cout<<"invertTree called here"<<endl;
	if(tempp==NULL){
		return NULL;
	}
	// cout<<tempp->val<<endl;
	struct node *left = invertTree(tempp->left);
	struct node *right = invertTree(tempp->right);

	tempp->right = left;
	tempp->left = right;
	return tempp;
}


struct node* LCA(struct node* p, int n1, int n2){

	if(p==NULL){
		return NULL;
	}
	if(p->val == n1 || p->val==n2){
		return p;
	}
	struct node* p_left =  LCA(p->left, n1, n2);
	struct node* p_right = LCA(p->right, n1, n2);

	if(p_left && p_right){
		return p;
	}
	return (p_left!=NULL)? p_left: p_right;
}
// class Solution {
// public:
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if (!root) return nullptr;
//         if (root->val == key) {
//             if (!root->right) {
//                 TreeNode* left = root->left;
//                 delete root;
//                 return left;
//             }
//             else {
//                 TreeNode* right = root->right;
//                 while (right->left)
//                     right = right->left;
//                 swap(root->val, right->val);    
//             }
//         }
//         root->left = deleteNode(root->left, key);
//         root->right = deleteNode(root->right, key);
//         return root;
//     }
// };

int main(){
	// for(int i=0;i<7;i++){
		addNode(20);
		addNode(22);
		addNode(8);
		addNode(12);
		addNode(4);
		addNode(10);
		addNode(14);
		// print(root);
		// struct node * temppp =	invertTree(root);
		 // print(temppp);
		cout<<"*****"<<endl;
		// rightView(temppp);
		// cout<<endl;
		struct node* lcatemp = LCA(root, 14, 10);
		cout<<lcatemp->val<<endl;
	// }
	// print(root);
	// cout<<isBST(root)<<endl;
		// LevelOrder(root);
// cout<<height(root)<<endl;
// cout<<minHeight(root)<<endl;
		// topview(root);
	return 0;
}