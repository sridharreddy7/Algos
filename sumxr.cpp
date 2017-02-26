#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <bitset>
#include <math.h>
using namespace std;

int main(){

	long long int n;
	cin>>n;
	long long sum=0;
	while(n>0){
		// cout<<n%2?0:1<<"heh"<<endl;
		long long int temp = n%2?0:1;
		if(temp){
			sum++;
		}
		n/=2;
	}
	long long int res = pow(2, sum);
	cout<<res<<endl;
	return 0;
}