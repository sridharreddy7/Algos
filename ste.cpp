#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	stack <string> stk;
	int n;
	cin>>n;
	string str="";
	stk.push(str);
	while(n--){
		int type;
		int k;
		string temp;
		cin>>type;
		if(type==1){
			cin>>temp;
			str = stk.top()+temp;
			stk.push(str);
		}
		else if(type==2){
			cin>>k;
			string top1 = stk.top();
			while(k--){
				top1.pop_back();
			}
			// /cout<<"top here "<<top1<<endl;
			if(top1.size()==0){
				stk.push("");	
			}
			else{
				stk.push(top1);
			}
		}
		else if(type==3){
			cin>>k;
			string tt = stk.top();
			cout<<tt[k-1]<<endl;
		}
		else if(type==4){
			stk.pop();
		}
	}
	return 0;
}