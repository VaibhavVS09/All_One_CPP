//WAP to enter the five element in array and reverse it

#include<iostream>
using namespace std;

int main(){
	int i,j,mid,size,temp,end;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	mid=size/2;
	end=size-1;
	for(i=0;i<mid;i++){
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	cout<<"Array After Reverse\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<"\n";
	}
}