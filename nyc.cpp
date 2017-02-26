#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int count =0;
		int flag =0;
		for(int i=1;i<=n;i++){
			if((a[i]-i)>2){
				cout<<"Too chaotic"<<endl;
				flag=1;
				break;
				
			}
		}
		int swap = 0;
		if(!flag){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n-i;j++){
					if(a[j]>a[j+1]){
						int temp = a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
						count++;
						swap =1;
					}
				}
				if(swap){
					swap= 0;
				}
				else
					break;
			}
			cout<<count<<endl;
		}
	}
	return 0;
}