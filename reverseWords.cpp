#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	// cout<<str<<endl;

	int s=0,e=0;

	for(int i=0; i<=str.length(); i++){
		if(str[i]!=' ' && str[i]!='\0'){
			// cout<<"here "<<str[i]<<endl;
			e++;
		}
		else if(str[i]==' '|| str[i]=='\0'){
			// cout<<"s here "<<s<<endl;
			// cout<<"e here "<<e<<endl;
			int temp1 = s, temp2=e;
			int rlen = s+e;
			// rlen/=2;
			for(int j=s; j<rlen/2;j++){
				char tt = str[j];
				str[j]=str[rlen-j-1];
				str[rlen-j-1] = tt;
			}
			// cout<<str[++s]<<" before";
			e=e+1;
			s=e;
			// e=i;
		}
	}
	cout<<str<<endl;
	return 0;
}