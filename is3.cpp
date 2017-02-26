#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

bool isPowerOfThree(int n) {
    int flag =0;
    if(n%2==0){
        return false;
    }
    else if(n%5==0){
        return false;
    }
    else if(n%7==0){
        return false;
    }
    else if(n%11 ==0){
        return false;
    }
    else if(n%13 ==0){
        return false;
    }
    else {
        while(n>3){
        	cout<<"here"<<endl;
            if(!(n%3==0)){
                return false;
            }
            n/=3;
        }
        return true;
    }
}

int main(){
	cout<<isPowerOfThree(27)<<endl;
	return 0;
}