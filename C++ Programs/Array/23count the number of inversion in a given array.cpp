//count the number of inversion in a given array

#include<iostream>
using namespace std;
int main(){
	int size,i,j,cnt=0;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Inversion In Giving Array Are: \n";
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				cout<<a[i]<<" "<<a[j]<<" \n";
				cnt++;
			}
		}
	}
	cout<<"Count Of Inversion In Array Is: "<<cnt;
	return 0;
}