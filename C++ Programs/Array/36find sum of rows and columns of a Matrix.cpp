//find sum of rows and columns of a Matrix
#include<iostream>
using namespace std;
int main(){
	int size,i,j,rowsum,columsum;
	cout<<"Enter The Size Of Matrix\n";
	cin>>size;
	int mat[size][size];
	cout<<"Enter The Element In Matrix\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>mat[i][j];
		}
	}
	for(i=0;i<size;i++){ rowsum=0;
		for(j=0;j<size;j++){
			cout<<mat[i][j]<<" ";
			rowsum=rowsum+mat[i][j];
		}cout<<rowsum;
		cout<<"\n";
	}
	for(i=0;i<size;i++){ columsum=0;
		for(j=0;j<size;j++){
			columsum=columsum+mat[j][i];
		}cout<<columsum<<" ";
	}
	return 0;
}