#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;


stack<int> s1;	
stack<int> s2;


void enqueue(int key){
	s1.push(key);
	return;
}

void dequeue(){
	int size = s1.size();
	for(int i=0;i<size;i++){
		// int t = s1.top();
		s2.push(s1.top());
		// cout<<s1.top()<<"s1"<<endl;
		// cout<<s2.top()<<"s2"<<endl;
		s1.pop();
	}
	cout<<s2.top()<<endl;
	s2.pop();
	size = s2.size();
	for(int i=0;i<size;i++){
		s1.push(s2.top());
		s2.pop();
	}
	return;
}

int main(){
	enqueue(1);
	enqueue(2);
	dequeue();
	enqueue(4);
	dequeue();
	return 0;

}