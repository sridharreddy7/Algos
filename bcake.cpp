//Problem        : Birthday Cake
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits> 
#include <stdio.h>
using namespace std;

int maxSumIS( int arr[], int n )
{
    int i, j, max = 0;
    int msis[n];
    
    for ( i = 0; i < n; i++ )
        msis[i] = arr[i];
    for ( i = 1; i < n; i++ )
        for ( j = 0; j < i; j++ )
            if ( arr[i] >= arr[j] && msis[i] < msis[j] + arr[i])
                msis[i] = msis[j] + arr[i];
 
    
    for ( i = 0; i < n; i++ )
        if ( max < msis[i] )
            max = msis[i];
 
    return max;
}
int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int sum = maxSumIS(a, n);
	cout<<sum<<endl;
	    return 0;
}
