// WAP to enter the five elements in array and show it  

#include<iostream>
using namespace std;

int main(){
	int i,size;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Elements In Array\n";
	for(i=0; i<size; i++){
		cin>>a[i];
	}
	cout<<"Elements In Array Area: \n";
	for(i=0; i<size;i++){
		cout<<"a["<<i<<"]"<<" = "<<a[i]<<"\n";
	}
	return 0;
}