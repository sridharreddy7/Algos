#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	long long int r=3;
	while(t > r){
		t = t-r;
		r*=2;
	}
	cout<<r-t+1<<endl;
}