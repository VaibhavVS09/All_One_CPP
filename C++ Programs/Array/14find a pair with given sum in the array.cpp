// WAP to find a pair with given sum in the array.

#include<iostream>
using namespace std;

int main(){
	int size,i,j,sum;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Sum To Find Pair\n";
	cin>>sum;
	cout<<"Pair With Sum "<<sum<<"are\n";
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]+a[j]==sum){
				cout<<a[i]<<" "<<a[j]<<" with indexes-----> "<<i<<" "<<j<<" \n";
				a[j]=0;
			}
		}
	}
	return 0;
}