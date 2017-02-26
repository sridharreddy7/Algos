#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

struct node{
	struct node *parent;
	struct node *children[26];
	int count;
	// vector<int> times;
};

void insertWord(struct node* head, string str){
	// cout<<"here"<<endl;
	struct node *rt = head;
	for(int i=0;i<str.length();i++){
		if(rt->children[str[i]-'a']==NULL){
			rt->children[str[i]-'a'] = new node;
			rt->children[str[i]-'a']->parent = rt;
			rt->children[str[i]-'a']->count=0;
		}
		rt->children[str[i]-'a']->count++;
		rt = rt->children[str[i]-'a'];			
	}
}

int findWord(struct node *head, string str){
	struct node *rt = head;
	int res =0;
	int flag=0;
	for(int i=0;i<str.length();i++){
		if(rt->children[str[i]-'a']!=NULL){
			res = rt->children[str[i]-'a']->count;
			rt = rt->children[str[i]-'a'];
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag){
		return 0;
	}
	return res;
}
int main(){
	struct node *root = new node;
	// char word[25];
	string word;
	int n;
	cin>>n;
	while(n--){
		string type;
		cin>>type;
		if(type=="add"){
			cin>>word;
			insertWord(root,word);
		}
		else if(type=="find"){
			cin>>word;
			cout<<findWord(root, word)<<endl;
		}
	}
	return 0;
}