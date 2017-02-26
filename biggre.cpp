#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	// cin>>n;
	int a[7]={0,1,2,2,3,3,0};
	// for(int i=0;i<7;i++)
		// cout<<a[i]<<endl;
	int pivot = 6;//length-1
	while(pivot>0 && a[pivot] <= a[pivot-1])
		pivot--;
	// cout<<pivot<<endl;
	int succ = 6;
	while(a[succ] <= a[pivot-1])
		succ--;
	int temp = a[pivot-1];
	a[pivot-1] = a[succ];
	a[succ] =temp;
	succ = 6;
	while(pivot<succ){
		temp = a[pivot];
		a[pivot] = a[succ];
		a[succ] = temp;
		pivot++;
		succ--;

	}
	for(int i=0;i<7;i++)
		cout<<a[i]<<endl;	
	return 0;
}