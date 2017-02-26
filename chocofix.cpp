#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n, m, p;
	cin>>n>>m>>p;
	while(p--){
		long long int q;
		int c=0;
		cin>>q;
		c = q/n;

		int temp=c;
		int w = q/n;

		while(w >= m){
			c = w/m ;
			temp+=w/m;
			w= c+w%m;
		}
		cout<<temp<<endl;
	}
	return 0;
}