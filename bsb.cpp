//Problem        : Sportsbar
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits> 
using namespace std;

int main() {
	int n;
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++){
		char temp[256];
		cin>>temp;
		int len = strlen(temp);
		a[i]=temp[len-1]-'0';
		b[i]=temp[len-1]-'0';
	}
    return 0;
}
