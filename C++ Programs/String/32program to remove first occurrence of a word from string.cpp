//program to remove first occurrence of a word from string

#include<iostream>
using namespace std;
int main(){
	char str[100],word[50],removed[100];
	int i=0,j,k,m,find=0;
	bool remove=false;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Word To Remove It's 1st Occurrence\n";
	cin.getline(word,100);
	m=0;
	while(str[i]!='\0'){
		if(str[i]==word[0] && !remove){
			j=i,k=0;
			while(str[j]==word[k] && str[j]!='\0' && word[k]!='\0'){
				j++,k++;
				find=1;
			}
			if(word[k]=='\0'){
				i=j;
				remove=true;
			}
		}
		removed[m]=str[i];
		i++,m++;
	}
	removed[m]='\0';
	if(find){
		cout<<"String After Removing Word: "<<removed;
	}else{
		cout<<"Word Not Found";
	}
	return 0;
}