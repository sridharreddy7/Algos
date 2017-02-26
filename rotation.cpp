#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,d;
    cin>>n>>d;
    int a[n+1];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
// cout<<endl;
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";

    return 0;
}
