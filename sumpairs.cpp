#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int hash[100]={0};
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		hash[a[i]]++;
	}

	int count=0;
	
	for(int i=0;i<100;i++){
		if(hash[i]>0){

			if(k>i){
				if(hash[i]==1){
				 if(hash[k-i]>0 && i!=k-i){
					count++;
					}
				}
				else{
					if(hash[k-i]>0){
					count++;
					}
				}
			}

			else{
				if(hash[i]==1){
					if(hash[i-k]>0 && i!=i-k){
						count++;
					}
				}
				else{
					if(hash[i-k]>0 ){
						count++;
					}
				}
			}
			// cout<<"done"<<endl;
		}
		
	}

	cout<<count/2<<endl;
	return 0;
}