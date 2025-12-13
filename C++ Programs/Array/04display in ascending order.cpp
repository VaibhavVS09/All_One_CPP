//WAP to enter the five element and display in ascending order

#include<iostream>
using namespace std;

int main(){
	int i,j,size,temp;
	cout<<"Enter The Array size\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Array After Ascending Order\n";
	for(i=0; i<size; i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}