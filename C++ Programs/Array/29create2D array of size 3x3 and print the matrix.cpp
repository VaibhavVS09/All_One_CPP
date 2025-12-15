//Create 2D array of size 3x3 and print the matrix
#include<iostream>
using namespace std;
int main(){
	int size,i,j;
	cout<<"Enter The Size For 2D Array\n";
	cin>>size;
	int a[size][size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){cin>>a[i][j];}
		}
	cout<<"2D Matrix Is: \n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){cout<<a[i][j]<<" ";}
		cout<<"\n";}
	return 0;
}