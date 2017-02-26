#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string str;
	cin>>str;
	int count =1;
	for(int i=0;i<str.length();i++){
		if(str[i]>='A' && str[i]<='Z'){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}	