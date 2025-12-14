// find two elements whose sum is closest to zero

#include<iostream>
using namespace std;
int main(){
	int size,i,j,x,y,z,sum;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	x=a[0];
	y=a[1];
	sum=x+y;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			z=abs(a[i]+a[j]);
			if(z<=sum){
				sum=z;
				x=a[i];
				y=a[j];
			}
		}
	}
	cout<<"The Pair of elements whose sum is minimum are "<<x<<" "<<y<<"\n";
	return 0;
}