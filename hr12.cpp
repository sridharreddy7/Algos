#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    char s[128];
    cin >> s;
    long n;
    cin >> n;
    long j=0,sum=0;
    for(long i=0;i<n;i++){
        if(s[j]=='a' && j< strlen(s)){
            cout<<"here"<<endl;
            sum++;
            j++;
        }
        else if(j>=strlen(s)){
            cout<<"here2"<<endl;
            j=0;
            //i--;
        }
    }
    cout<<sum<<endl;
    return 0;
}
