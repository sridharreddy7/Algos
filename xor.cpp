#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int l,r;
	cin>>l>>r;
	int max=-1;
	for(int i=l;i<=r;i++){
		for(int j=l;j<=i;j++){
			int temp = i^j;
			if(temp > max)
				max=temp;
		}
	}
	cout<<max<<endl;
}