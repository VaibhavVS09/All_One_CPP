//find if a given integer x appears more than n/2 times in a sorted array of n integers

#include<iostream>
using namespace std;
int main(){
	int size,i,x,cnt=0;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Element To Check If It Appears More Then size/2 Time or Not\n";
	cin>>x;
	for(i=0;i<size;i++){
		if(x==a[i]){
			cnt++;
		}
	}
	if(cnt>(size/2)){
		cout<<"Element "<<x<<" Appears More Then size/2 Times In Giving Array\n";	
	}else{
		cout<<"Element "<<x<<" Not Appears More Then size/2 Times In Giving Array\n";
	}
	return 0;
}