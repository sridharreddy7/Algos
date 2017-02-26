#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
int mini=-100,val;

int getMinAfterPop(){
	int t =s.top();
	s.pop();
	if(t < mini){
		//cout<<mini-t<<endl;
		mini = mini-t;
	}
	return mini;
}

int main(){
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>val;
		if(s.empty()){
			s.push(val);
			mini = val;
		}
		else{
			if(mini > val){
				
				s.push(val-mini);
				mini = val;
			}
			else{
				s.push(val);
			}
		}
	}
	for(int i=0;i<n;i++){
		// cout<<s.top()<<endl;
		// s.pop();
	}
	// cout<<mini<<endl;
	cout<<getMinAfterPop()<<" 1"<<endl;
	cout<<getMinAfterPop()<<" 2"<<endl;
	cout<<getMinAfterPop()<<" 3"<<endl;
	cout<<getMinAfterPop()<<" 4"<<endl;

	return 0;
}