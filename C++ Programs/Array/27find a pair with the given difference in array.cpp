//find a pair with the given difference in array

#include<iostream>
using namespace std;
int main(){
	int size,i,j,diff,flag;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Enter The Difference To Find pair In Array\n";
	cin>>diff;
	flag=0;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[j]-a[i]==diff){
			cout<<"As Per Difference Pair Is: "<<a[i]<<" "<<a[j]<<"\n";	
			flag=1;
			break;
			}else{
				flag=0;
			}
		}
		if(flag==1){
			break;
		}
	}
	if(flag==0){
		cout<<"As Per Difference No Pair Found In Array\n";	
	}
	
	return 0;
}