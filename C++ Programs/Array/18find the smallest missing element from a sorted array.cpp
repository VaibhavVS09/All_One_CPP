//find the smallest missing element from a sorted array

#include<iostream>
using namespace std;
int main(){
	int size,i,j,temp;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Smallest Missing Element Is:\n";
	for(i=0;i<size-1;i++){
		int diff=(a[i+1]-a[i]);
		if(diff>1){
			int missing=a[i]+1;
			cout<<missing<<"\n";
			break;
		}
	}
	return 0;
}