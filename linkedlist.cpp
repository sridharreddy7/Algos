#include <stdio.h>
#include <iostream>
using namespace std;

struct node{
	int val;
	struct node *next;
};
struct node *head =NULL;
void *newNode(int key){
	struct node *temp1;
	struct node *temp = new node;
	temp->val = key;
	if(head==NULL){
		head = temp;
		temp1 = temp;
		return NULL;
	}
	else{
		// cout<<"NULL NOT here"<<endl;
		while(temp1->next!=NULL){
			temp1 = temp1->next;
		}
	}
	temp1->next= temp;

	return NULL;
}
void printList(node *head1){
	if(head1==NULL){
		
		return;
	}
	while(head1!=NULL){
		cout<<head1->val<<endl;
		head1 = head1->next;
	}
}
struct node* reverselist(struct node* hh){
	int len=0;
	while(hh!=NULL){
		len++;
		hh = hh->next;
	}
	cout<<len<<endl;
	return NULL;
}

int main(){
	for(int i=0;i<10;i++)
		newNode(i);
	printList(head);
	// cout<<head->val<<endl;
	return 0;
}