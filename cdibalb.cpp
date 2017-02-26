#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	stack<char> s;
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int flag=1;
		for(int i=0;i<str.length();i++){
			if(str[i]==')' || str[i]=='}' || str[i]==']'){
				char temp = s.top();
				
				flag=0;
				break;
			}

		}
		if(flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}