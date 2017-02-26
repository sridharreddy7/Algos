#include<stdio.h>
#include<iostream>
using namespace std;

int heapify(int arr[], int n, int i){
	// cout<<"****"<<i<<endl;
	int largest = i;
	int l = 2*i +1;
	int r = 2*i +2;
	if(l<n && arr[l]>arr[largest]){
		largest = l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest =r;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		heapify(arr, n, largest);
	}
	char ch;
	for(int s=0;s<n;s++){
		cout<<arr[s]<<" "<<endl;

	}
	// cout<<"*******"<<endl;
	// cin>>ch;
	return 0;
}

int heapSort(int arr[], int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr, n, i);
	}
	// cout<<arr[0]<<"&&&&&&"<<endl;
	for(int j=n-1;j>=0;j--){
		swap(arr[j],arr[0]);
		heapify(arr, j, 0);
	}
	return 0;
}

int main(){
	int arr[]={1,5,4,6,7,8,3,9,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	// heapify(arr, n, 3);
	// cout<<n<<endl;
	heapSort(arr, n);
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}