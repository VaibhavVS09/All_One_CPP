//Write a program to enter the 5 values in ascending order and find out the missing element from array

#include<iostream>
using namespace std;

int main(){
	int i,j,k,size,temp;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
    cout<<"Missing Elements In Array\n";
    for(i=0;i<size;i++){
    	j=a[i]+1;
    	k=a[i+1];
    	while(j<k){
    		cout<<j<<"\t";
    		j++;
		}
	}
	return 0;
}