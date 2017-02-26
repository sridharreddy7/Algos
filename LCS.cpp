#include<stdio.h>
#include<iostream>
#include<String.h>
using namespace std;
char str[255]="";
int p=0;
int LCS(char *a, char *b, int m, int n){
	// cout<<a<<b<<m<<n<<endl;
	if(m==0 || n==0){
		return 0;
	}
	else if(a[m-1]==b[n-1]){
		// cout<<"here"<<endl;
		// cout<<"ffdfds "<<a[m-1]<<b[n-1]<<endl;
		str[p]=a[m-1];
		p++;
		return 1+ LCS(a,b,m-1,n-1);
	}
	else{
		// cout<<a[m-1]<<"  "<<b[n-1]<<endl;
		return max(LCS(a,b,m-1,n),LCS(a,b,m,n-1));
	}
	return 0;
}

int max(int i, int j){
	return (i>j)?i:j;
}
int findMinCost(char *t, char *u){
	
	int lcscost = LCS( t, u, strlen(t),strlen(u));
	cout<<"final cost"<<lcscost<<endl;
	return lcscost;
}


int main(){
	// string x,y;
	char x[]="srdar";
	char y[]="radar";
	
	int minCost = findMinCost(x,y);
	cout<<str<<endl;
	return 0;
}
