#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[128]={0};
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a[temp]++;
	}
	int count=0;
	for(int i=0;i<128;i++){
		count += a[i]/2;
	}
	cout<<count<<endl;
}