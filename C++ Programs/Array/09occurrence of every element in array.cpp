//WAP to enter the 10 elements array and print the occurrence of every element 

#include<iostream>
using namespace std;

int main(){
	int size,i,j,cnt;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Occurrence Of Element In Array\n";
	cnt=0;
	for(i=0;i<size;i++){
		if(a[i]!=0){
			cnt=1;
			for(j=i+1;j<size;j++){
				if(a[i]==a[j]){
					cnt++;
					a[j]=0;
				}
			}
			cout<<a[i]<<"-------------"<<cnt<<"\n";
		}
	}
	return 0;
}