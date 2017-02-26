#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

string printTime(int A, int B, int C, int D){
	int arr[4]={A,B,C,D};
	string invalid ="NOT POSSIBLE";
	sort(arr,arr+4);
	int f=-1,s=-1,t=-1,p=-1,fi,si,ti,pi;
	for(int i=0;i<4;i++){
		if(arr[i] >=0 && arr[i] <=2 && arr[i]>f){
			f=arr[i];
			fi =i;
		}
	}
	arr[fi]=-1;
	for(int i=0;i<4;i++){
		if(f==1 || f==0){
			if(arr[i] >=0 && arr[i] <=9 && arr[i]>s){
				s=arr[i];
				si =i;
			}
		}
		else if(f==2){
			if(arr[i] >=0 && arr[i] <=3 && arr[i]>s){
				s=arr[i];
				si =i;
			}
		}
	}
	arr[si]=-1;
	for(int i=0;i<4;i++){
		if(arr[i] >=0 && arr[i] <=5 && arr[i]>t){
			t=arr[i];
			ti =i;
		}
	}
	arr[ti]=-1;
	for(int i=0;i<4;i++){
		if(arr[i] >=0 && arr[i] <=9 && arr[i]>p){
			p=arr[i];
			pi =i;
		}
	}
	arr[pi]=-1;
	if(f==-1 || s==-1 || t==-1 || p==-1){
		return invalid;
	}
	else{
		// cout<<f<<" "<<s<<" "<<t<<" "<<p<<" "<<endl;
	}
	string res="";
	res = res+to_string(f)+to_string(s)+":"+to_string(t)+to_string(p);
	return res;
}

int main(){
	int a=9,b=1,c=9,d=7;
	cout<<printTime(a,b,c,d);
	return 0;
}