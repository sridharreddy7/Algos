#include <utility>
#include <stdio.h>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	string str1, str2;
	long long int wgt;


	map<string, long long int> map1;
	map<string, long long int>map2;
	map<string, string>map3;
	map<long long int, string>map4;

	long long int n,m;
	cin>>n;

	while(n--){
		cin>>str1>>str2>>wgt;
		map1.insert( pair<string,long long int>(str1,wgt));
		map2.insert( pair<string,long long int>(str2,wgt));
		map4.insert( pair<long long int, string>(wgt, str2));
		map3.insert( pair<string, string>(str1,str2));
	}

	cin>>m;
	long long int a[100000];
	long long int len=0;

	while(m--){
		string s;
		cin>>s;
		if(map1.count(s)>0){
			a[len]=map1.find(s)->second;
			len++;
		}
	}
	sort(a, a+len, greater<long long int>());

	for(long long int j=0;j<len;j++){
		// std::map<string, long long int>::const_iterator it;
		// for(it = map2.begin(); it!=map2.end();++it){
		// 	if(it->second == a[j]){
		// 		cout<<it->first<<" ";
		// 		continue;
		// 	}
		// }
		cout<<map4.find(a[j])->second<<" ";
	}

	return 0;

}