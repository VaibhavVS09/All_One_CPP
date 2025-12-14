//enter the element in array on specified location

#include<iostream>
using namespace std;

int main(){
	int size,i,index,value;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size+1];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Index For Placing The Element\n";
	cin>>index;
	cout<<"Enter The Element For Index\n";
	cin>>value;
	for(i=size;i>=index;i--){
		a[i]=a[i-1];
	}
	a[index]=value;
	cout<<"Array After Placing Element\n";
    for(i=0;i<size+1;i++){
    	cout<<a[i]<<"\n";
	}
	return 0;
}