//multiplication of two square Matrices of two 2×2 square matrices
#include<iostream>
using namespace std;
int main(){
	int i,j,k,size;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int mat1[size][size];
	int mat2[size][size];
	int product[size][size];
	cout<<"Enter The Element In 1st Matrices\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>mat1[j][j];
		}
	}
	cout<<"Enter The Element In 2nd Matrices\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>mat2[j][j];
		}
	}
	
	return 0;
}