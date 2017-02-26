#include <stdio.h>
#include <iostream>

using namespace std;

struct node {
	int val;
	struct node* next;
};

struct node *head =NULL;

void push(int key){
	struct node *newnode = new node();
	newnode->val=key;

	if(head==NULL){
		head = newnode;
		newnode->next = NULL;
	}
	else{
		newnode->next = head;
		head = newnode;
	}
	return;
}

void pop(){
	if(head==NULL)
		cout<<"empty stack"<<endl;
	else{
		cout<<head->val<<endl;
		head = head->next;
	}
	return;
}

int main(){
	int n;
	// cin>>n;
	// while(n--){
	pop();
	push(10);
	push(20);
	pop();
	pop();
	push(30);
	pop();
	return 0;
	// }
}