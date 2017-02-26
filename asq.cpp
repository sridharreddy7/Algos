#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;

long long int a[100000];
vector<long long int> vct1;
vector<long long int> vct2;
int n,m;

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long temp;
		cin>>temp;
		vct1.push_back(temp);
	}
	while(m--){
		int type,p,q;
		cin>>type>>p>>q;
		if(type==1){
			for(vector<long long int>::iterator l = vct1.begin()+p-1;l<vct1.begin()+q;l++)
				vct2.push_back(*l);
			for(vector<long long int>::iterator l = vct1.begin();l<vct1.begin()+p-1;l++)
				vct2.push_back(*l);
			for(vector<long long int>::iterator l = vct1.begin()+q;l<vct1.end();l++)
				vct2.push_back(*l);
			// for(int k=0;k<vct2.size();k++){
			// 	cout<<vct2[k]<<endl;
			// }
			
		}
		else if(type==2){
			for(vector<long long int>::iterator l = vct1.begin();l<vct1.begin()+p-1;l++)
				vct2.push_back(*l);
			for(vector<long long int>::iterator l = vct1.begin()+q;l<vct1.end();l++)
				vct2.push_back(*l);
			for(vector<long long int>::iterator l = vct1.begin()+p-1;l<vct1.begin()+q;l++)
				vct2.push_back(*l);
			// cout<<endl;
			// for(int k=0;k<vct2.size();k++){
			// 	cout<<vct2[k]<<endl;
			// }
		}
		vct1=vct2;
		vct2.erase(vct2.begin(),vct2.end());
	}
	long long int res = vct1[0]-vct1[n-1];
	if(res>0){
		cout<<res<<endl;
	}
	else{
		res*=-1;
		cout<<res<<endl;
	}
	for(int k=0;k<vct1.size();k++){
		cout<<vct1[k]<<" ";
	}	
	// cout<<endl;
	return 0;
}