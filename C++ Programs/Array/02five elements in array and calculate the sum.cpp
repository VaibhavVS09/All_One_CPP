//WAP to enter the five elements in array and calculate the sum of all elements

#include<iostream>
using namespace std;

int main(){
	int sum=0,i,size;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"Addition Of All Array Element Is: "<<sum;
	return 0;
}