#include <stdio.h>
#include <iostream>
using namespace std;

struct node
{
	int val;
	struct node * next;
};

struct node *head1= NULL;
struct node *head2= NULL;
struct node *head3= NULL;

struct node * add(struct node *h1, struct node* h2){
	struct node* tt;
	int cry=0;
	while(h1!=NULL || h2!=NULL){

		struct node *nodet = new node;
		int a1 = (h1!=NULL)? h1->val:0;
		int a2 =  (h2!=NULL)? h2->val:0;
		int a = a1+a2+cry;
		nodet->val = (a) %10;
		cry = a/10;


		if(head3==NULL){
			head3 = nodet;
			tt = nodet;
		}
		else{
			while(tt->next!=NULL){
				tt = tt->next;
			}
			tt->next = nodet;
		}
		if(h1!=NULL)
			h1=h1->next;	
		if(h2!=NULL)
			h2=h2->next;
	}
	if(cry>0){
		struct node *nodet = new node;
		nodet->val = cry;
		tt = tt->next;
		tt->next = nodet;
	}
	return tt;
}


int main(){

	int n1,n2,n3;
	int carry;
	cin>>n1>>n2;
	struct node *temp1,*temp2,*temp3;
	while(n1--){
		int num;
		cin>>num;
		struct node *node1 = new node;
		node1->val = num;
		node1->next = NULL;
		if(head1==NULL){
			head1 = node1;
			temp1 = node1;
		}
		else{
			while(temp1->next!=NULL){
				temp1 = temp1->next;
			}
			temp1->next = node1;
		}

	}

	// temp1 = head1;
	// while(temp1!=NULL){
	// 		cout<<temp1->val<<" ";
	// 		temp1 = temp1->next;
	// }


	while(n2--){
		int num;
		cin>>num;
		struct node *node1 = new node;
		node1->val = num;
		node1->next = NULL;
		if(head2==NULL){
			head2 = node1;
			temp2 = node1;
		}
		else{
			while(temp2->next!=NULL){
				temp2 = temp2->next;
			}
			temp2->next = node1;
		}

	}
	temp2 = head2;
	while(temp2!=NULL){
			// cout<<temp2->val<<" ";
			temp2 = temp2->next;
	}

	struct node *res = add(head1, head2);




	res = head3;
	while(res!=NULL){
			cout<<res->val<<endl;
			res = res->next;
	}
	return 0;
}
