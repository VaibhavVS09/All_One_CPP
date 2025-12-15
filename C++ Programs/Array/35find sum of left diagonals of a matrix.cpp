//find sum of left diagonals of a matrix
#include<iostream>
using namespace std;
int main(){
	int i,j,size,sum;
	cout<<"Enter The Size Of Matrix\n";
	cin>>size;
	int mat[size][size];
	cout<<"Enter The Element In Matrix\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>mat[i][j];
		}
	}
	sum=0;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i==j){ sum=sum+mat[i][j];
			}	
		}
	}
	cout<<"Sum Of Right Diagonal Of Matrix Is: "<<sum;
	return 0;
}