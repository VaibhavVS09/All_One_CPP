//Print all permutations of a string

#include<iostream>
using namespace std;
void premutation(char str[],int l,int len){
	if(l==len){
		cout<<str<<"\n";	
	}else{
		for(int i=l;i<len;i++){
		//swapping char
		char temp=str[l];
		str[l]=str[i];
		str[i]=temp;
		//function calling
		premutation(str,l+1,len);
		//backtrack;
		temp=str[l];
		str[l]=str[i];
		str[i]=temp;
	  }
	}
};

int main(){
	char str[100];
	int len;
	cout<<"Enter The String: \n";
	cin.getline(str,100);
	len=strlen(str);
	cout<<"Possible Combination Of String "<<str<<" Are As Follow: \n";
	premutation(str,0,len);
	return 0;
}
