// WAP to insert the element on specified position in array

#include<iostream>
using namespace std;

int main(){
	int i,size,index,element;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0; i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Index Of Array Which Need To Change\n";
	cin>>index;
	cout<<"Enter The Element For Change\n";
	cin>>element;
	a[index]=element;
	cout<<"Array After Changing Element\n";
	for(i=0; i<size; i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}