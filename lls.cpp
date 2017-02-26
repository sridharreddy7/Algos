#include <stdio.h>
#include <iostream>

using namespace std;

struct node{
	int val;
	struct node *next;
};

struct node* head=NULL;

void add(int key){
	struct node* newnode = new node();
	newnode->val = key;
	newnode->next = NULL;

	if(head==NULL){
		head = newnode;
	}
	else{
		struct node* temp = new node();
		temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next= newnode;
	}
	return;
}

struct node* reverse(struct node* headnode){
	struct node* cur=head;
	struct node* pre=NULL;
	struct node* next=NULL;

	while(cur){
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	return pre;
}

void print(struct node *node1){
	struct node* temp = node1;
	while(temp!=NULL){ 
		cout<<temp->val<<endl;
		temp = temp->next;
	}
	return;
}

void kth(struct node*headnode, int k){
	struct node* fast = headnode;
	struct node* slow = headnode;
	while(k-- && fast->next!=NULL){
		fast = fast->next;
	}
	while(slow!=NULL && fast !=NULL){
		slow= slow->next;
		fast =fast->next;
		
	}

	if(slow!=NULL)
		cout<<slow->val<<endl;

}

void deleteNode(struct node* headnode, int key){
	struct node* temp = headnode;
	int flag=1;
	while(temp!=NULL && flag){
		if(temp->val == key){
			// cout<<"here"<<endl;
			flag=0;
		}
		else{
			temp = temp->next;
		}
	}
	if(temp==NULL){
		cout<<"not found"<<endl;
	}
	else{
		if(temp->next==NULL){
			cout<<"here "<<temp->val<<endl;
			temp=NULL;
			delete temp;
			temp=NULL;
			
			// temp->next=NULL;
			// return;
		}
		else{
			temp->val = temp->next->val;
			temp->next = temp->next->next;
		}
	}
}

int main(){

	add(10);
	add(12);
	add(7);
	add(5);
	add(3);
	add(71);
	add(99);
	add(19);
	deleteNode(head, 19);
	// kth(head, 5);
	print(head);

	struct node * test = reverse(head);
	// print(test);
	return 0;

}