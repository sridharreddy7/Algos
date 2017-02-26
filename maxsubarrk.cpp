#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int arr[100][100]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0){
				arr[j][j+i]=a[j];
			}
			else{
				if(j+i<n)
					arr[j][j+i] = arr[j][j]+arr[j+1][j+i];
			}

		}
	}
	int max = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]<=k){
				if(j-i+1 > max)
					max = j-i+1;
			}
		}
	}
	cout<<max<<endl;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}