#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		char str1[12346],str2[12346],res[12346];
		cin>>str1;
		int j=0;
		for(int i=strlen(str1)-1;i>=0;i--){
			str2[j]=str1[i];
			j++;
		}
		// cout<<str2<<endl;
		int z=0,flag=1;
		for(int i=0;i<strlen(str1);i++){
			if(flag){
				if(str1[i]==str2[i]){
					if(str1[i]!='.'){
						res[z]=str1[i];
						z++;
					}
					else{
						res[z]='a';
						z++;
					}
				}
				else if(str1[i]=='.' && str2[i]=='.'){
					res[z]='a';
					z++;
				}
				else if(str1[i]=='.' && str2[i]!='.'){
					res[z]=str2[i];
					z++;
				}
				else if(str2[i]=='.' && str1[i]!='.'){
					res[z]=str1[i];
					z++;
				}
				else if(str2[i]!='.' && str1[i]!='.'){
					flag=0;
					
				}
			}
			else{
				break;
			}
		}
		if(flag){
			cout<<res<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}