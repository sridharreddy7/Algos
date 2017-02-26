//Problem        : Base Arithmetic
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
    long long int sum=0;
    char x[20],y[20];
    cin>>x;
    int index;
    int valarr[100]={0};
    int val=0;
    for(int i=0;i<strlen(x);i++){
    	int val1 = x[i]-'0';
    	// cout<<val1<<" val1 here"<<endl;
    	if(val1>9){
    		valarr[i]=(x[i]-'a')+10;
    		// cout<<valarr[i]<<" if array val"<<endl;
    	}
    	else{
    		valarr[i] = val1;
    	}
    	if(val < val1){
    		val=val1;
    		index =i;
    	}
    }    
    // cout<<x[index]<<"largest value"<<endl;
    int base;
    if((x[index]-'0')>9){
    	base = x[index]-'a';
    	base+=10;
    }
    else{
    	base = x[index]-'0';
    	base++;
    }
    // cout<<base<<"base value"<<endl;
    int xval=0,yval=0,temp=1;
    for(int i=strlen(x)-1;i>=0;i--){
    	cout<<"array value here "<<valarr[i]<<endl;
    	int temp1 = valarr[i];
    	temp1 *= temp;
    	cout<<"temp1 value here "<<temp1<<endl;
    	xval+=temp1;
    	cout<<"xval val here "<< xval<<endl;
    	temp *= base;
    	cout<<"temp val here "<< temp<<endl;
    	// xval+= (valarr[i]*temp);
    	// temp*=base;
    	// cout<<"xval here  "<<xval<<endl;
    }
    // cout<<"finalval"<<xval<<endl;
    return 0;
}
