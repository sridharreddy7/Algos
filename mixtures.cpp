#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){

	while(1){
		int n;
		cin>>n;
		int a[n+1], b[n+1][n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j]=-1;
			}
			// cout<<endl;
		}
		for(int i=0,j=i+1;i<n;i++,j++){
			// for(int j=0;j<n;j++){
				if(i>=j){
					b[i][j]=0;

				}
				else if((j-i)==1){
					b[i][j]=a[i]*a[j];
				}
				else if(j>i){
					int temp = 10000;
					for(int p=i,q=i+1;p<j;p++,q++){
						// for(int q=i+1;q<j;q++){
							int test = b[p][q] + ((a[p]+a[q])%100)*a[i];
							cout<<test<<" testv"<<endl;
							// cout<<"p "<<p<<" q "<<q<<endl;
							if(test < temp){
								temp = test;
							}
						// }
					}
					b[i][j] =temp;
				}
			// }
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
	
}