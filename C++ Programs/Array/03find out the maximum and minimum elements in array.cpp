//WAP to enter the five elements in array and find out the maximum and minimum elements  

#include<iostream>
using namespace std;

int main(){
	int size,i,min,max;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0; i<size;i++){
		cin>>a[i];
	}
	max=-1,min=a[0];
	for(i=0; i<size; i++){
		if(a[i]>max){
			max=a[i];
		}if(a[i]<min){
			min=a[i];
		}
	}
	cout<<"Min Element In Array Is: "<<min<<"\nMax Element In Array Is: "<<max<<"\n";
	return 0;
}