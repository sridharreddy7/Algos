#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

//int isValid();

string movePlane(string command){
	int len = command.length();
	int x=0,y=0;
	stack<int> stk;
	string invalid="(999, 999)";
	int val=0;
	int  mul=1;
	for(int i=0;i<len;i++){
		if(command[i]-'0'>=0 && command[i]-'0'<=9){
			val = val*10 + command[i]-'0';
		}
		else if(command[i]=='U' || command[i]=='D' || command[i]=='L' || command[i]=='R' || command[i] =='X'){

			if(i==0){
				val=1;
			}
			if(i>0 && val==0){
				val=1;
			}
			if(i>0 && val==1 && command[i-1]=='0'){
				val=0;
			}
			
			if(command[i]=='U')
				{
					stk.push(x);
					stk.push(y);
					y+=val;
				}
			else if(command[i]=='D'){
				
				stk.push(x);
				stk.push(y);
				y-=val;
			}
			else if(command[i]=='L'){
				
				stk.push(x);
				stk.push(y);
				x-=val;
			}
			else if(command[i]=='R'){
				
				stk.push(x);
				stk.push(y);
				x+=val;
			}
			else if(command[i]=='X'){
				for(int k=0;k<val;k++){
					if(stk.size()>0){
						y = stk.top();
						stk.pop();
						x =stk.top();
						stk.pop();

					}
				}
			}
			val=0;	
		}
		else{
			return invalid; 		}
		}
		if(val>0){
			return invalid;
		}
	
	string res = "("+to_string(x)+", "+to_string(y)+")";
	

	return res;

}
int main(){
	cout<<movePlane("ABCD")<<endl;
	return 0;
}