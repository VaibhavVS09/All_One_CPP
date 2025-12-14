//find out the maximum difference between any two elements

#include<iostream>
using namespace std;
int main(){
	int size,i,j,maxdiff,s,e;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	maxdiff=0;
	s=0;
	e=0;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[j]-a[i]>maxdiff && a[i]<a[j]){
				maxdiff=a[j]-a[i];
				s=a[i];
				e=a[j];
			}
		}
	}
	cout<<"Element Which Provide Maximum Difference Are: "<<s<<" "<<e<<"\n";
	cout<<"The Maximum Differnece Is: "<<maxdiff;
	return 0;
}