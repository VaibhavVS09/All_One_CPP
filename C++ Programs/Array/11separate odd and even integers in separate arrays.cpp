// separate odd and even integers in separate arrays

#include<iostream>
using namespace std;

int main(){
	int i,j,k,size,size1,size2;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
	cin>>a[i];
	}
	size1=0,size2=0;
	for(i=0;i<size;i++){
		if(a[i]%2==0){
			size1++;
		}else{
			size2++;
		}
	}
	int even[size1];
	int odd[size2];
	j=0;k=0;
	for(i=0; i<size;i++){
		if(a[i]%2==0){
			even[j]=a[i];
			j++;
		}else{
			odd[k]=a[i];
			k++;
		}
	}
	cout<<"Even Array\n";
	for(j=0;j<size1;j++){
		cout<<even[j]<<"\n";
	}
	cout<<"Odd Array\n";
	for(k=0;k<size2;k++){
		cout<<odd[k]<<"\n";
	}
	return 0;
}
		