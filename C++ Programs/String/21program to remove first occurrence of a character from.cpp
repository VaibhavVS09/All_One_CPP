//program to remove first occurrence of a character from string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i,j,len;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Remove It's 1st Occurrency\n";
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
			break;
		}
	}
	str[len]='\0';
	cout<<"String After Removing It's Character Occurrency: "<<str;
	return 0;
}