#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

string movePlane(string command){
	int x=0,y=0;
	stack<int> stk;
	string invalid="(999, 999)";
	int val=0;
	for(int i=0;i<command.length();i++){
	if(command[i]-'0'>=0 && command[i]-'0'<=9){
		val = val*10 + command[i]-'0';
	}
	else if(command[i]=='U' || command[i]=='D' || command[i]=='L' || command[i]=='R' || command[i] =='X'){

		if(val==0){
			val=1; //For cases with no preceding integers ex: DLUR
		}
		if(i>0 && val==1 && command[i-1]=='0'){
			val=0;// For cases with preceding integer 0 Ex 0D0L0R
		}
		switch(command[i]){ 
			case 'U': 
				stk.push(x);
				stk.push(y);
				y+=val;
				break;
			case 'D':
				stk.push(x);
				stk.push(y);
				y-=val;
				break;
			case 'L':
				stk.push(x);
				stk.push(y);
				x-=val;
				break;
			case 'R':
				stk.push(x);
				stk.push(y);
				x+=val;
				break;
			case 'X':
				for(int k=0;k<val;k++){
					if(stk.size()>0){
						y = stk.top();
						stk.pop();
						x =stk.top();
						stk.pop();

					}
				}
				break;
		}
		val=0;	
	}
	else{
		return invalid;
		}
	}
	if(val>0){
		return invalid;
	}
	return "("+to_string(x)+", "+to_string(y)+")";
}
int main(){
cout<<movePlane("DL")<<endl;
return 0;
}