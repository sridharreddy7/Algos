#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(n<4){
			cout<<"0"<<endl;
			continue;
		}

		long long int a[n+1];
		long long int b[100000];

		for( int i=0;i<100000;i++)
			b[i]=0;

		for(long long int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
				cout<<"here"<<endl;

		long long int count=0;
		long long int len=0,bred=0;

		for(long long int i=0;i<10;i++){
			for(long long int j=0;j< 10;j++){
					if(i!=j){
						long long int temp1 = b[i];
						long long int temp2 = b[j];
						if(b[i]/2>=1){
							len++;
							b[i]=b[i]/2;
						}
						
						if(b[j]/2>=1){
							bred++;
							b[j]=b[j]/2;
						}

						
						if(len && bred)
							count++;	
					}
				// }
			}
		}
		cout<<count<<endl;
	}
}