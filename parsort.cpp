#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}

	sort(b, b+n);
	int start=-1, end=-1;

	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			start =i;
			break;
		}
	}
	for(int i=n-1;i>start;i--){
		if(a[i]!=b[i]){
			end =i;
			break;
		}
	}
	cout<<end-start+1<<endl;
	return 0;
}