//Reverse order of words in a string

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0,j=0,start=0,end=0,len=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	cout<<"Reverse Word Order\n";
	end=len;
	for(i=len-1;i>=0;i--){
		if(str[i]==' '||i==0){
			start=(i==0)? 0:(i+1);
			for(j=start;j<end;j++){
				cout<<str[j];
			}
			if(i!=0){
				cout<<" ";
				end=i;
			}
		}
	}
	return 0;
}
