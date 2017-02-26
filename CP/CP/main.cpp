//
//  main.cpp
//  CP
//
//  Created by Sridhar Maddireddy on 9/16/16.
//  Copyright © 2016 Sridhar Maddireddy. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
// void reverse( int arr[],int f, int l){
// 	cout<<"f"<<f<<endl;
// 	cout<<"l"<<l<<endl;
// 	for(int i=f;i<(l+f)/2;i++){
// 		int temp = arr[i];
// 		arr[i]=arr[l-i-1];
// 		arr[l-i-1]=temp;
// 	}
// }
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    reverse(a,a+n);
    
    reverse(a,a+k);
    
    reverse(a+k,a+	n);
    while(q--){
        int tempp;
        cin>>tempp;
        cout<<a[tempp]<<endl;
    }
    
    return 0;
    
    
}

