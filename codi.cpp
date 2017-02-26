#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    int count=0;
    int max =0;
    int start=0;
    while(N>0){
    	if(!start){
	        if(N%2==1){
	        	// cout<<"*0"<<endl;
	        	start=1;
	            
	        }
	        N/=2;
	        continue;
    	}
        if(N%2==1){
        	// cout<<"0"<<endl;
         //    count++;
        	count=0;
        	N/=2;
        }
        else{
        	count++;
            if(max<count){
				// cout<<"1"<<endl;
                max=count;
                // count=0;
            }
            N/=2;
        }
        
    }
    return max;
}
int main(){
// cout<<solution(561892)<<endl;
	cout<<solution(561892)<<endl;
return 0;
	
}