#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	int a[11] = {1,2,5,0,1,2,3,7,0,0,4};
	int slow=-1;
	for(int i=0;i<11;i++){
		if(a[i]==0){
			slow =i;
			break;
		}
	}
	for(int i=slow+1;i<11;i++){
		if(a[i]!=0){
			// int temp = a[i];
			// a[i]=a[slow];
			// a[slow++] = temp;

			int temp = a[slow];
			a[slow++]=a[i];
			a[i]=temp;

		}
	}
	for(int i=0;i<11;i++){
		cout<<a[i]<<endl;	
	}
	return 0;

}