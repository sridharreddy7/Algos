#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int main(){
	int a,b,c,p,q,r;
	cin>>a>>b>>c;

	p = abs(a-b)+abs(a-c);
	q = abs(a-b)+abs(b-c);
	r = abs(a-c)+abs(b-c);

	if(p<q && p<r){
		cout<<p<<endl;
	}
	else if(q<p && q<r){
		cout<<q<<endl;

	}
	else{
		cout<<r<<endl;
	}
	return 0;
}