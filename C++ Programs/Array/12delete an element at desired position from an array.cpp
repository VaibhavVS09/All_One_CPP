//delete an element at desired position from an array

#include<iostream>
using namespace std;

int main(){
	int i,size,index;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	//1 2 3 4 5
	cout<<"Enter The Index For Delete Element\n";
	cin>>index;
	for(i=index;i<size-1;i++){
		a[i]=a[i+1];
	}
	size--;
	cout<<"Array After The Deleting Element\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}