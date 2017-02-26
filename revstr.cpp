#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
   // Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char p = a[0];
    char q = b[0];
    // cout<<p<<q<<endl;
    a[0]=q;
    b[0]=p;
    // cout<<a[0]<<b[0]<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;
}
