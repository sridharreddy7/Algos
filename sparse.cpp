#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<string> str;
    vector<string>::iterator itr;
    string temp;
    for(int i=0;i<n;i++){
    	cin>>temp;
    	str.push_back(temp);
    }
    int q;
    cin>>q;
    while(q--){
    	cin>>temp;
    	int count=0;
    	for(itr=str.begin();itr<str.end();itr++){
    		if(*itr==temp){
    			count++;
    		}
    	}
    	cout<<count<<endl;
    }
    
    return 0;
}
