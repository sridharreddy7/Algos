#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>
#include <bitset>
#include <math.h>


using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned  int n;
		cin>>n;
		n = ~n;
		cout<<n<<endl;	
	}
	return 0;
}