// Write a program to find the majority element of an array

#include<iostream>
using namespace std;

int main(){
	int size,i,j,flag,cnt;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Elelemt In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	flag=0;
	for(i=0;i<size;i++){
		cnt=0;
		for(j=i+1;j<size;j++){
			if(a[i]==a[j]){
				cnt++;
			}
		}
		if(cnt>=(size/2)){
			cout<<"Majority Element In Array Is: "<<a[i];
			flag=1;
		}
	}
	if(flag==0){
		cout<<"There Is No Majority Element In Array";
	}
	return 0;
}