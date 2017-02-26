#include <stdio.h>
#include <iostream>

using namespace std;


int bsearch(int a[], int s, int e, int k){

	if(s>e){
		return -1;
	}
	int mid = s+e;
	mid/=2;

    if(a[mid] > k){

		return bsearch(a, s, mid-1, k);
	}
	else if(a[mid] < k){

		return bsearch(a, mid+1, e, k );
	}
	if(a[mid]==k){
		return mid;
	}
	return 0;
}


int leftmost(int a[], int s, int e, int k){
	int n=e;
	while(s<=e){
		int mid = s+e;
		mid/=2;

		if(k < a[mid]){
			e = mid-1;			
		}
		else if(k > a[mid]){
			s =mid+1;
		}
		else{
			e = mid-1;
		}
	}
	if(s >=0 && s<n && a[s]==k){
		return s;
	}
	return -1;

}


int rightmost(int a[], int s, int e, int k){
	int n=e;
	while(s<=e){
		int mid = s+e;
		mid/=2;

		if(k < a[mid]){
			e = mid-1;			
		}
		else if(k > a[mid]){
			s =mid+1;
		}
		else{
			s = mid+1;
		}
	}
	if(e >=0 && e<n && a[e]==k){
		return e;
	}
	return -1;

}

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;

	int res = bsearch(a,0,n,key);
	int res2 = bsearch(a, 0, n, key-1);
	// cout<<res<<endl;
	// cout<<"** "<<res2<<endl;
	cout<<leftmost(a,0,n,key)<<endl;
	cout<<rightmost(a,0,n,key)<<endl;

	vector<int> v;
	v.push_back(leftmost(a,0,n,key));
	v.push_back(rightmost(a,0,n,key));

	return 0;
}