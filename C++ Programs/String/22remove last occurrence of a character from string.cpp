//remove last occurrence of a character from string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i,j,len,index;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Remove It's Last Occurrency\n";
	cin>>ch;
	while(str[i]!='\0'){
		if(str[i]==ch){
			index=i;
		}
		len++;
		i++;
	}
	for(j=index;j<len;j++){
		str[j]=str[j+1];
	}
	str[len]='\0';
	cout<<"String After Removing Last Occurrency Of Character: "<<str;
	return 0;
}