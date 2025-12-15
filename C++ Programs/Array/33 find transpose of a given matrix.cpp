//  find transpose of a given matrix
#include<iostream>
using namespace std;
int main(){
	int size,i,j;
	cout<<"Enter The Array Matrix\n";
	cin>>size;
	int mat[size][size];
	cout<<"Enter The Element In Matrix\n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			cin>>mat[i][j];
		}
	}
	cout<<"Transpose Of Matrix Is: \n";
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			cout<<mat[j][i]<<" ";
		}cout<<"\n";
	}
	return 0;
}
