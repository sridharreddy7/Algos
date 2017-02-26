#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	string stringNumber;
	cin>>stringNumber;
	int temp, sum, ten=1;
	for(int i=stringNumber.length()-1;i>=0;i--){
		int temp = stringNumber[i]-'0';
		cout<<temp<<" temp"<<endl;
		if(temp < 0 || temp > 9){
			continue;
		}
		sum = sum + ten*temp;
		ten*=10;
	}
	cout<<sum<<endl;
	return 0;
}