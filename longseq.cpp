#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char str[100000];
		cin>>str;
		int z=0,o=0;
		if(strlen(str)==1){
			cout<<"Yes"<<endl;
			continue;
		}
		for(int len=0;len<strlen(str);len++){
			if(str[len]=='0')
				z++;
			else
				o++;
		}
		
		if(z==0 || o==0){
			cout<<"No"<<endl;
		}
		else if(z==1 || o==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}