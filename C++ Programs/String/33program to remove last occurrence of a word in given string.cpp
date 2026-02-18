//program to remove last occurrence of a word in given string

#include<iostream>
using namespace std;
int main(){
	char str[100],word[50];
	int i,j,k,l,lastIndex;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Word To Remove Last Occurrenc\n";
	cin.getline(word,50);
	i=0,lastIndex=-1;
	while(str[i]!='\0'){
		if(str[i]==word[0]){
			j=i,k=0;
			while(str[j]==word[k] && str[j]!='\0' && word[k]!='\0'){
				j++,k++;
			}
			if(word[k]=='\0'){
				lastIndex=i;
			}
		}
		i++;
	}
	if(lastIndex!=-1){
		i=lastIndex,l=0;
		while(word[l]!='\0'){
			for(j=i;str[j]!='\0';j++){
				str[j]=str[j+1];
			}
			l++;
		}
	}
	if(lastIndex!=-1){
		cout<<"String After Removal: "<<str;
	}else{
		cout<<"Word Not Found:";
	}
	return 0;
}