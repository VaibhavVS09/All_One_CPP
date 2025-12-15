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
		for(j=0;j<size;j++){ cin>>mat1[i][j];
		}
	}
	cout<<"Enter The Element In 2nd Matrices\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>mat2[i][j];
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			product[i][j]=0;
			for(k=0;k<size;k++){
				product[i][j]=product[i][j]+(mat1[i][k]*mat2[k][j]);
			}
		}
	}
	cout<<"Both Matrices After Multiplication\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			cout<<product[i][j]<<" ";
		}cout<<"\n";
	}
	return 0;
}