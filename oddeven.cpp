#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

struct node{
	int val;
	struct node *next;
};

struct node *head=NULL;

void print(struct node *h){
	while(h!=NULL){
		cout<<h->val<<endl;
		h = h->next;
	}
}

int main(){
	for(int i=1;i<=5;i++){
		struct node *newnode = new node;
		newnode->next =NULL;
		newnode->val=i;
		if(head==NULL){
			head = newnode;
		}
		else{
			struct node *temp = head;
			while(temp->next!=NULL){
				temp= temp->next;
			}
			temp->next = newnode;
		}
	}
	if(head==NULL){
		return;
	}
	struct node *temp1 = head;
	struct node *temp2 = temp1->next;
	struct node * temp3 = temp2;

	while(temp1->next!=NULL && temp2->next!=NULL){
		// cout<<"hi";
		temp1->next = temp2->next;
		temp1 = temp1->next;
		temp2->next = temp1->next;
		temp2 = temp2->next;
	}
	temp1->next = temp3;

	print(head);
	return 0;
}