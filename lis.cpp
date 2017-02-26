#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	long long int max = -1;
	long long int n;
	cin>>n;
	long long int a[n+1],b[n+1];

	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}

	for(long long int i=0;i<n;i++){
		b[i]=1;
	}
	
	for(long long int i=1;i<n;i++){
		for(long long int j=0;j<i;j++){
			if(a[i]>a[j] && b[i]< b[j]+1){
				b[i]=b[j]+1;
			}
		}
	}
	// for(int i=0;i<n;i++){
		// cout<<b[i]<<" ";
	// }
	// cout<<endl;
	for (int i = 0; i < n; i++ )
        if (max < b[i])
            max = b[i];
            
	cout<<max<<endl;
	
	return 0;
}