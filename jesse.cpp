#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	string str;
    getline(cin, str);
	
	// cout<<str.size()<<endl;

	for(int i=0;i<str.size();i++){
		int j= str[i]-'0';
		j+=1;
		j=j-50;
		// cout<<"j val "<<j-50<<endl;
		if(j>0 && j<10){
			cout<<j;
			continue;
		}
		else if(j>=10 && j<26){
			cout<<j<<"#";
			continue;
		}
		else{
			cout<<str[i];
			continue;
		}
	}
	cout<<endl;
	return 0;
}