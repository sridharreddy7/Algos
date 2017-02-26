#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	string time;
    cin >> time;
    int h1,h2,final;
    h1 = (int)time[0];
    h2 = (int)time[1];
    final = ((h1-48)*10)+h2-48;
    //cout<<final<<"hehh";
    if(time[8]=='A'){
    	if(final==12){
    		//cout<<"herer";
    		cout<<"00";
    		for(int i=2;i<time.length()-2;i++)
    			cout<<time[i];
    		cout<<endl;
    		return 0;
    	}
    	else {
    		for(int i=0;i<time.length()-2;i++)
    			cout<<time[i];
    		cout<<endl;
    		return 0;
    	}
    }
    else{
    	if(final==12){
    		cout<<"12";
    		for(int i=2;i<time.length()-2;i++)
    			cout<<time[i];
    		cout<<endl;
    		return 0;
    	}
		else {
			cout<<final+12;
    		for(int i=2;i<time.length()-2;i++)
    			cout<<time[i];
    		cout<<endl;
    		return 0;
    	}
    }
}	