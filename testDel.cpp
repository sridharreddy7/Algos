#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];

	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}