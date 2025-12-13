//Write a program in Java to merge two arrays of same size sorted in decending order.

#include<iostream>
using namespace std;

int main(){
	int size1,size2,i,j,k;
	cout<<"Enter The Size Of 1st Array\n";
	cin>>size1;
	int a[size1];
	int b[size1];
	size2=size1+size1;
	int c[size2];
	cout<<"Enter The Element In 1st Array\n";
	for(i=0; i<size1; i++){
		cin>>a[i];
	}
	cout<<"Enter The Element In 2nd Array\n";
	for(i=0;i<size1;i++){
		cin>>b[i];
	}
	for(i=0,k=0;i<size1;i++,k++){
		c[k]=a[i];	
	}
	for(i=0;i<size1;i++,k++){
		c[k]=b[i];
	}
	cout<<"Array After Merging:\n";
	for(k=0;k<size2;k++){
		cout<<c[k]<<"\n";
	}
	for(i=0; i<size2; i++){
		for(k=i+1; k<size2; k++){
			if(c[i]>c[k]){
				int temp=c[i];
				c[i]=c[k];
				c[k]=temp;
			}
		}
	}
	cout<<"Array After Decending Order\n";
	for(i=0; i<size2;i++){
		cout<<c[i]<<"\n";
	}
	return 0;
}