#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int a1,a2,a3;
	int b1,b2,b3;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	int a=0,b=0;
	if(a1>b1)
		a+=1;
	if(a1<b1)
		b+=1;
	if(a2>b2)
		a+=1;
	if(a2<b2)
		b+=1;
	if(a3>b3)
		a+=1;
	if(a3<b3)
		b+=1;
	cout<<a<<" "<<b<<endl;
	return 0;
}