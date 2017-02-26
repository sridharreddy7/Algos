#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	char str[n+1][128];
	string s;
	for(int i=0;i<n;i++){
		cin>>str[i];
	
	
		 s = str[i];
		 int lens = s.length();
		 int pivot = lens-1;
		 while(pivot>0 && s[pivot] <= s[pivot-1])
		 	pivot--;
		 if(pivot <=0){
		 	cout<<"no answer"<<endl;
		 	continue;
		 }
		 int succ = lens-1;

		 while(s[succ] <= s[pivot-1])
		 	succ--;

		 char temp= s[pivot-1];
		 s[pivot-1] = s[succ];
		 s[succ]=temp;

		 succ = lens-1;
		 while(pivot < succ){
		 	// cout<<pivot<<" pivot"<<endl;
		 	// cout<<succ<<" succ"<<endl;
		 	temp = s[pivot];
			s[pivot] = s[succ];
			s[succ] = temp;
			pivot++;
			succ--;
		 }
		 cout<<s<<endl;
		// cout<<s<<endl;
	}
	return 0;
}