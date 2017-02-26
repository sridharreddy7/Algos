#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count[1024]={0};
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i] > a[j]){
					count[i]++;
				}
			}
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum += count[i];
		}
		if(sum%2==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;	
		}
	}
	return 0;
}