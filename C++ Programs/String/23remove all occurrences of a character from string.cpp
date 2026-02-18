//remove all occurrences of a character from string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i,j,len;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Remove It's All Occurrence\n";
	cin>>ch;
	while(str[i]!='\0'){
		len++;
		i++;
	}
	for(i=0;i<len;i++){
		if(str[i]==ch){
			for(j=i;j<len;j++){
				str[j]=str[j+1];
			}
		}
	}
	cout<<"String After Removing It's All Occurrence Of Character: "<<str;
	return 0;
}