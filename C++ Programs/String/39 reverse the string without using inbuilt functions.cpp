// reverse the string without using inbuilt functions

#include<iostream>
using namespace std;
int main(){
	char str[100],temp;
	int i,start,mid,end,len;
	cout<<"Enter The String: \n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	end=len-1;
	mid=len/2;
	for(i=0;i<mid;i++,end--){
		temp=str[i];
		str[i]=str[end];
		str[end]=temp;
	}
	cout<<"String After Reverse: "<<str;
	return 0;
}