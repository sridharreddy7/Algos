#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> unionOFArray(vector<int>&arr1, vector<int> &arr2){
	vector<int> resultVector;
	int a[10]={0};

	for(int i=0;i<arr1.size();i++){
		if(a[arr1[i]]==0){
			a[arr1[i]]++;
			resultVector.push_back(arr1[i]);
		}
	}
	for(int i=0;i<arr2.size();i++){
		if(a[arr2[i]]==0){
			a[arr2[i]]++;
			resultVector.push_back(arr2[i]);
		}
	}
	return resultVector;
}

int main(){

	vector<int> arr1;
	int n1;
	cin>>n1;
	for(int i=0;i<n1;i++){
		int temp;
		cin>>temp;
		arr1.push_back(temp);
	}

	vector <int> arr2;
	int n2;
	cin>>n2;
	for(int i=0;i<n2;i++){
		int temp;
		cin>>temp;
		arr2.push_back(temp);
	}

	vector<int> res = unionOFArray(arr1, arr2);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<endl;
	}

	return 0;
}