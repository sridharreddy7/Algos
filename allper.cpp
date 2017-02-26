#include <stdio.h>
#include <iostream>

using namespace std;

void permutation(string st, int l, int r){
	if(l==r){
		cout<<st<<endl;
	}
	else{
		for(int i=l;i<r;i++){
			// cout<<"here st i "<<st[i]<<" & ll "<<l<<endl;
			char temp = st[i];
			st[i]=st[l];
			st[l]=temp;
			permutation(st, l+1, r);
			// cout<<"here "<<st<<endl;
		 //    temp = st[i];
			// st[i]=st[l];
			// st[l]=temp;
		}
	}
}

int main(){
	string str;
	cin>>str;
	permutation(str, 0, str.length());
	return 0;

}