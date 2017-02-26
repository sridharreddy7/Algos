#include <stdio.h>
#include <iostream>
#include <stack>
#include <string.h>
#include <vector>

using namespace std;


int partition( int a[], int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;
		
   while( 1)
   {
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}


void quickSort( int a[], int l, int r)
{
   int j;

   if( l < r ) 
   {
   	// divide and conquer
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }
	
}



int solution(int A[], int N){
	int b[N+1];
	for(int i=0;i<N;i++){
		// cin>>a[i];
		b[i]=A[i];
	}
	// sort(A,A+N);
	quickSort( A, 0, N-1);

	int p,q;
	for(int i=0;i<N;i++){
		if(A[i]!=b[i]){
			p=i;
			break;
		}
	}
	for(int i=N-1;i>=0;i--){
		if(A[i]!=b[i]){
			q=i;
			break;
		}
	}
	int temp = p-q;
	if(temp<0){
		temp*=-1;
	}
	// cout<<temp+1<<endl;
	return temp+1;
}
int main(){

	int n;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
		// b[i]=a[i];
	}
	cout<<solution(a,n)<<endl;
	return 0;

}