#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
	int n;
	cin>>n;
	unordered_map <string, int> umap;
	vector<string> str;
	vector <vector<string> >result(100);
	int index=0;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		string temp2 = temp;
		sort(temp2.begin(), temp2.end());
		if(umap.find(temp2)==umap.end()){
			umap[temp2] = index;
			result[index].push_back(temp);
			index++;
		}
		else {
			result[umap.find(temp2)->second].push_back(temp);
		}

	}
	result.resize(index);
	for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}