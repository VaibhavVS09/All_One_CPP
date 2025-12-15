//convert the array in such a way that double its value and replace the next number with 0 if current and next element are same 
//and rearrange the array such that all 0's shifted to the end. 
//Expected Output:  
//given array is: 0 3 3 3 0 0 7 7 0 9  
//The new array is: 6 3 14 9 0 0 0 0 0 0
#include<iostream>
using namespace std;
int main(){
	int size,i,j,temp,nonzeroindex;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){cin>>a[i];}
	for(i=0;i<size;i++){
		if(a[i]==a[i+1]){
			a[i]=a[i]*2;
			a[i+1]=0;
		}
	}
	nonzeroindex=0;
	for(i=0;i<size;i++){ 
		if(a[i]!=0){
			temp=a[i];
			a[i]=a[nonzeroindex];
			a[nonzeroindex]=temp;
			nonzeroindex++;
		}
	}
	cout<<"Array After Shiftting\n";
	for(i=0;i<size;i++){cout<<a[i]<<" ";}
	return 0;
}