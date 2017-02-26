//Problem        : Numerical Palindromes
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits> 
#include <stdio.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	int a[16],index=0,hash[10]={0};
	while(n>0){
		a[index]= n%10;
		n/=10;
		index++;
	}
	for(int i=index-1;i>=0;i--){
		// cout<<a[i]<<endl;
		hash[a[i]]++;
	}
	int max=-1;
	for(int i=0;i<10;i++){
		if(max < hash[i])
			max++;
	}
	cout<<max<<endl;
    return 0;
}
