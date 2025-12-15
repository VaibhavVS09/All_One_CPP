// print or display the upper triangular of a given matrix
#include<iostream>
using namespace std;
int main(){
	int size,i,j;
	cout<<"Enter The Size Of Matrix\n";
	cin>>size;
	int mat[size][size];
	cout<<"Enter The Element In Matrix\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){ cin>>mat[i][j];
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(j>i){
				cout<<"0"<<" ";
			}else{
				cout<<mat[i][j]<<" ";
			}
		}cout<<"\n";
	}
	return 0;
}