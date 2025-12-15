//subtration of two Matrices of same size 2D array
#include<iostream>
using namespace std;
int main(){
	int size,i,j;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size][size];
	int b[size][size];
	int c[size][size];
	cout<<"Enter The Element In 1st 2D Array\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>a[i][j];
		}
	}
	cout<<"Enter The Element In 2nd 2D Array\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>b[i][j];
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ c[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"Addition Of 2 2D Array Is: \n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}