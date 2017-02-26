#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <cmath>

using namespace std;
int n;
int val(int a[],int b[], int i){
	if(b[i]!=-1){
		return b[i];
	}
	else if(i==0){
		if(a[i]<=a[i+1]){
			return 1;
		}
		else{
			return 1+ val(a,b,i+1);
		}
	}
	else if(i==n-1){
		if(a[i] <= a[i-1]){
			return 1;
		}
		else{
			return 1+val(a,b,i-1);
		}
	}
	else if(a[i]<a[i+1] && a[i]<a[i-1]){
		return 1;
	}
	else if(a[i]>a[i-1] && a[i] > a[i+1]){
		return 1+ max(val(a,b,i-1),val(a,b,i+1));
	}

	else if(a[i] > a[i-1]){
		return 1+ val(a,b,i-1);
	}
	else if(a[i] > a[i+1]){
		return 1+val(a,b,i+1);
	}
	return 0;
}

int main(){

	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		b[i]=-1;
	}
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(b[i]==-1){
			b[i]=val(a,b,i);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum= sum + b[i];
	}
	cout<<sum<<endl;
	return 0;
}