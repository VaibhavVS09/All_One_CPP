//find a subarray with given sum from the given array

#include<iostream>
using namespace std;

int main(){
	int size,i,j,k,sum,num;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Number To Check Subarray\n";
	cin>>num;
	cout<<"Subarray with sum: "<<num<<"\n";
	for(i=0;i<size;i++){   // 3 4 -7 1 3 3 1 -4
		sum=0;
		for(j=i;j<size;j++){
			sum=sum+a[j];
			if(sum==num){
				cout<<"Subarray from index "<<i<<" "<<j<<" :";
				for(k=i;k<=j;k++){
				cout<<a[k]<<" ";	
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}