#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k=0;
		while(k<n-i-1){
			cout<<" ";
			k++;
		}
		k=0;
		while(k<i+1){
			cout<<"#";
			k++;
		}
		cout<<endl;

	}
	return 0;
}