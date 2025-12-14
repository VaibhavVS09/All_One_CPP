// move all zeroes to the end of a given array

#include<iostream>
using namespace std;
int main(){
	int size,i,j,end,temp;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	end=size;
	for(i=0;i<end;i++){
		if(a[i]==0&&a[end]!=0){
			temp=a[i];
			a[i]=a[end];
			a[end]=temp;
		}
		if(a[end]==0){
			end--;
		}
	}
	cout<<"Array After Moving All Zero To End\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}