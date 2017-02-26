#include <stdio.h>
#include <iostream>
using namespace std;

int stepCount(int s, int e){
	if(s==e){
		return 0;
	}
	return 1;
}


int main(){
	int start, end;
	cin>>start>>end;
	int count=0;
	int found=1;
	
	int temp = min(stepCount(start-9,end),stepCount(start-7,end));
	int temp2= min(stepCount(start+9,end),stepCount(start+7, end));
	count += min(temp, temp2);
	
	cout<<count+1<<endl;

		// if(start==end){
		// 	cout<<count<<endl;
		// 	return 0;
		// }
		// if(start > end){
		// 	start = start+9;	
		// }
		// else{

		// }
	// }
	return 0;
}