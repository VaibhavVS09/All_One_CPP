//find first occurrence of a word in a given string

#include<iostream>
using namespace std;
int main(){
	char str[100],word[100];
	int i=0,j=0,k=0,pos=-1;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Word To Search It's 1st Occurrence\n";
	cin.getline(word,100);
	while(str[i]!='\0'){
		if(str[i]==word[0]){
			k=i,j=0;
			while(str[k]==word[j] && str[k]!='\0' && word[j]!='\0'){
				k++;
				j++;
			}
			if(word[j]=='\0'){
				pos=i;
				break;
			}
		}
		i++;
	}
	if(pos!=-1){
		cout<<"1st Occurrence Of "<<word<<" At Index: "<<pos;
	}else{
		cout<<"Word Not Found";
	}
	return 0;
}