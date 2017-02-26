#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	int temp=0;
	while(n--){
		int val;
		cin>>val;
		temp = temp ^ val;
	}
	cout<<temp<<endl;
	return 0;
}