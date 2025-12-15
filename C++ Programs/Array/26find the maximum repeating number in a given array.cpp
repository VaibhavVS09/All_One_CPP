//find the maximum repeating number in a given array

#include<iostream>
using namespace std;
int main(){
	int size,i,j,cnt,cnt1,flag=0,ele;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	int a[size];
	cout<<"Enter The Element In Array\n";
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	cnt=0,cnt1=0;
	for(i=0;i<size;i++){
		if(flag==0){
			for(j=i+1;j<size;j++){
				if(a[i]==a[j]){
					cnt1++;
					flag=1;
				}else{
					flag=0;
				}
			}
		}
		if(cnt1>cnt){
			cnt=cnt1;
			ele=a[i];
		}
	}
		if(flag==1){
			cout<<"Max Repeting Element Is: "<<ele;	
		}else{
			cout<<"There Is No Max Repeting Element In This Array";
		}
	return 0;
}