#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int a[101];
int t;
int i=0,j=9,size=0;

void enq(int key){

	if(size<10){
		// cout<<size<<" size here"<<endl;
		j = (j+1)%10;
		a[j]= key;
		cout<<"enqueue --> "<<a[j]<<endl;
		size++;
	}
	else{
		// cout<<size<<" size here else"<<endl;
		cout<<"Full Queue"<<endl;
		return;
	}
}

void deq(){
	if(size==0){
		cout<<"Empty queue"<<endl;

	}
	else{
		cout<<"dequeue ----> "<<a[i]<<endl;
		i = (i+1)%10;
		size--;
	}
}

int main(){
	
	enq(10);
	// cout<<"size after 10 "<<size<<endl;
	enq(20);
	// cout<<"size after 20 "<<size<<endl;
	deq();
	// cout<<"size deq 1 "<<size<<endl;
	enq(15);
	// cout<<"size after 15 "<<size<<endl;
	deq();
	// cout<<"size deq 2 "<<size<<endl;
	deq();
	// cout<<"size deq 3 "<<size<<endl;
	deq();
	// cout<<"size deq 4 "<<size<<endl;
	for(int i=0;i<12;i++)
		enq(i);
	for(int i=0;i<12;i++)
		deq();
	return 0;

}