#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n;
	int a[4];
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	sort(a, a+4);
	
	int f=-1,s=-1,t=-1,fr=-1;

	int f1=-1, f2=-1, f3=-1, f4=-1;

	for(int i=0; i<4;i++){
		if(f < a[i] && a[i] <=2){
			f=a[i];
			// a[i]=-1;
			f1=i;
		}
	}
	if(f==1 || f==0){
		for(int i=0; i<4; i++){
			if(s <a[i] && a[i]!=-1 && f1!=i){
				s= a[i];
				f2=i;
			}
		}
	}
	else{
		for(int i=0;i<4;i++){
			if(s < a[i] && a[i]<4 && f1!=i){
				s=a[i];
				f2=i;

			}
		}

	}
	for(int i=0;i<4;i++){
		if(t< a[i] && f1!=i && f2!=i && a[i]<=5){
			t = a[i];
			f3=i;
			
		}
	}

	for(int i=0;i<4;i++){
		if(fr < a[i] && f1!=i && f2!=i && f3!=i){
			fr=a[i];

		}
	}
	if(f==-1 || s==-1 || t==-1 || fr==-1){
		cout<<"NOT POSSIBLE"<<endl;
	}
	else{
		cout<<f<<" "<<s<<" "<<t<<" "<<fr<<" "<<endl;
	}


	return 0;
}	