//Reverse a string

#include<iostream>
using namespace std;
int main(){
	char str[100],temp;
	int i=0,mid=0,end=0,len=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	mid=len/2;
	end=len-1;
	for(i=0;i<mid;i++){
		temp=str[i];
		str[i]=str[end];
		str[end]=temp;
		end--;
	}
	cout<<"String After Reverse Is: "<<str;
	return 0;
}
