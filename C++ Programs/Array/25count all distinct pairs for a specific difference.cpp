//count all distinct pairs for a specific difference in array

#include<iostream>
using namespace std;
int main(){
	int size,i,j,diff,cnt=0;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Difference To Count The Pairs\n";
	cin>>diff;
	cout<<"Pair With Giving Difference Are: \n";
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[j]-a[i]==diff){
				cout<<a[j]<<" "<<a[i]<<" \n";
				cnt++;
			}
		}
	}
	cout<<"Count Of Pairs Are: "<<cnt;
	
	return 0;
}