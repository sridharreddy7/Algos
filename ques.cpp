#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	stack<int> stk1;
	stack<int> stk2;
	while(n--){
		int type;
		cin>>type;
		int k;
		if(type==1){
			cin>>k;
			stk1.push(k);
		}
		else if(type==2){
			if(!stk2.empty()){
				stk2.pop();
			}
			else{
				while(stk1.size()>0){
					stk2.push(stk1.top());
					stk1.pop();
				}
				stk2.pop();
			}
		}
		else if(type==3){
			if(stk2.size()>0){
				cout<<stk2.top()<<endl;
			}
			else{
				while(stk1.size()>0){
					stk2.push(stk1.top());
					stk1.pop();
				}
				cout<<stk2.top()<<endl;
			}
		}
	}
	return 0;
}	