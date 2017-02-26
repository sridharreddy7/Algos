#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;


long countSteps(int n){
	int res[n+1];
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	n++;
	res[0]=0;res[1]=1;res[2]=2;res[3]=4;
	for(int i=4;i<=n;i++){
		res[i] = res[i-1]+res[i-3]+res[i-2];
	}
	return res[n-1];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		cout<<countSteps(s)<<endl;
	}
	return 0;
}