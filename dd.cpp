#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int d1=0,d2=0;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
         // cin >> a[a_i][a_j];
           if(a_i==a_j)
               d1+=a[a_i][a_j];
       }
    }
    cout<<d1<<endl;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
         // cin >> a[a_i][a_j];
           if(a_i+a_j==n-1)
               d2+=a[a_i][a_j];
       }
    }
    cout<<d2<<endl;
    int val= d1+d2;
    if(val<0)
        val*=-1;
    cout<<val<<endl;
    return 0;
}