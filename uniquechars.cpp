#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;
	}
	else if(n==3){
		return 4;
	}

	int temp1 = 1, temp2 =2, temp3 = 4;
	int res=0;

	for(int i=0;i<n;i++){
		res = temp1+temp2+temp3;
		temp1 = temp2;
		temp2 = temp3;
		temp3 = res;
	}

	

	cout<<res<<endl;
	return 0;

}