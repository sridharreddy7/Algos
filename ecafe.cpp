//Problem        : Egyptian Cafe
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits> 
using namespace std;

int main() {
	int n,m;
	string sridhar;
	cin>>sridhar;
	cout<<sridhar;
	return 0;
	cin>>n>>m;
	int prio[n+1];
	for(int i=0;i<n;i++){
		cin>>prio[i];
	}
	if(n==1){
		cout<<"2"<<endl;
		return 0;
	}
	int currprio = prio[m];
	
	int time=1;
	int flag=-1;
	
	if(m!=0){
		for(int i=m-1;i>=0;i--){
			if(prio[i]>=currprio)
				time++;
		}	
	}
	for(int i=m+1;i<n;i++){
		if(currprio< prio[i])
		{
			flag=i;
			break;
		}
	}
	if(flag==-1){
		cout<<"2"<<endl;
		return 0;
	}
	for(int i=flag;i<n;i++){
		if(currprio <= prio[i]){
			time++;
		}
	}
	cout<<time*2<<endl;
    return 0;
}
