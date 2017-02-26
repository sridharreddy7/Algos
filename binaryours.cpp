#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	std::vector<int> v1;
	std::vector<int> v2;
	v1.push_back(0);

	int toggle=1;

	while(n--){
		if(toggle){
			// cout<<"here"<<endl;
			toggle=0;
			v2.erase(v2.begin(), v2.begin()+v2.size());
			for (std::vector<int>::iterator it = v1.begin() ; it != v1.end(); ++it){
				if(*it==0){
					v2.push_back(0);
					v2.push_back(1);
				}
				else if(*it==1){
					v2.push_back(1);
					v2.push_back(0);
				}
			}
    				// std::cout << ' ' << *it;
		}
		else{
			// cout<<"herehere"<<endl;

			toggle=1;
			v1.erase(v1.begin(), v1.begin()+v1.size());
			for (std::vector<int>::iterator it = v2.begin() ; it != v2.end(); ++it){
				if(*it==0){
					v1.push_back(0);
					v1.push_back(1);
				}
				else if(*it==1){
					v1.push_back(1);
					v1.push_back(0);
				}
			}
		}
	}

			//
			// cout<<"printing v1 vector"<<endl;

			// for (std::vector<int>::iterator it = v1.begin() ; it != v1.end(); ++it){
			// 	cout<<*it<<" ";
			// }
			// cout<<"*********"<<endl;

			// //
			// cout<<"printing v2 vector"<<endl;

			// for (std::vector<int>::iterator it = v2.begin() ; it != v2.end(); ++it){
			// 	cout<<*it<<" ";
			// }

			// cout<<endl;

	if(toggle){
		//v1
		// for (std::vector<int>::iterator it = v1.begin() ; it != v1.begin()+k; ++it){
			
		// }
		if(k>v1.size()){
			cout<<-1<<endl;
			return 0;
		}
		else{
			cout<<v1[k-1]<<endl;
		}
	}
	else{
		if(k>v2.size()){
			cout<<-1<<endl;
			return 0;
		}
		else{
			cout<<v2[k-1]<<endl;
		}
		//v2
	}
	return 0;
}