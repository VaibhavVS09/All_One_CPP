//find the second largest element in an array

#include<iostream>
using namespace std;

int main(){
	int i,max,smax,size;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0; i<size;i++){
		cin>>a[i];
	}
	max=a[0],smax=a[0];
	for(i=0;i<size;i++){
		if(a[i]>max){
			smax=max;
			max=a[i];
		}else if(a[i]>smax && a[i]!=max){
			smax=a[i];
		}
	}
	cout<<"Second Largest Element In Array: "<<smax<<"\n";
	return 0;
}