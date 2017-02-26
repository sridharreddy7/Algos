#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long int n,r;
	cin>>n>>r;
	long int a[n+1];
	for(long int i=0;i<n;i++){
		cin>>a[i];
	}
	
	reverse(a,a+r);
	reverse(a+r,a+n);
	reverse(a,a+n);

	for(long int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}