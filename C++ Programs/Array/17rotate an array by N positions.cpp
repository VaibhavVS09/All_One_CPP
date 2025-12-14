//rotate an array by N positions

#include<iostream>
using namespace std;
int main(){
	int size,i,index,j,last;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Array Before Rotation\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<"\n";
	}
	cout<<"Enter The Index For Array Roatation\n";
	cin>>index;
	for(i=0;i<index;i++){
		last=a[0];
		for(j=0;j<size-1;j++){
			a[j]=a[j+1];
		}
		a[size-1]=last;
	}
	cout<<"Array After Roatation\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}