#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

string isBal(string str){
	stack<char> stk;

	for(int i=0;i<str.size();i++){
		if(str[i]=='(' || str[i]=='{' ||str[i]=='['){
			stk.push(str[i]);
		}
		else if(str[i]==')'){
			if(stk.empty() || stk.top()!='('){
				// cout<<"here"<<endl;
				return "NO";
			}
			stk.pop();
		}
		else if(str[i]==']'){
			if(stk.empty() || stk.top()!='['){
				// cout<<"here1"<<endl;
				return "NO";
			}
			stk.pop();
		}
		else if(str[i]=='}'){
			if(stk.empty() || stk.top()!='{'){
				// cout<<"here2"<<endl;
				return "NO";
			}
			stk.pop();
		}	
		
		
	}
	if(stk.size()==0){
			return "YES";
	}	
	return "NO";
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int flag=0;
		string str;
		cin>>str;
		cout<<isBal(str)<<endl;
	}
	return 0;
}