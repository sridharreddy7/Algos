#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	stack<int> s1,s2,s3;
	int q;
	cin>>q;
	long int topval=0;
	while(q--){
		int type;
		cin>>type;
		if(type==1){
			long long int val;
			cin>>val;
			s1.push(val);
			if(s1.size()==1){
				topval = val;
			}
		}
		if(type==2){
			if(!s2.empty()){
				s2.pop();
			}
			else{
				while(!s1.empty()){
					int temp = s1.top();
					s2.push(temp);
					s1.pop();
				}
				s2.pop();
			}
		}
		if(type==3){
			if(!s2.empty()){
				cout<<s2.top()<<endl;
			}
			else{
				cout<<topval<<endl;	
			}
		}
	}
	return 0;
}