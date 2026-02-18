//program to remove all occurrence of a word in given string

#include<iostream>
using namespace std;
int main(){
	char str[100],remove[100],word[50];
	int i,j,k,l;
	bool found=false;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Word To Remove It's All Occurrence\n";
	cin.getline(word,50);
	i=0,l=0;
	while(str[i]!='\0'){
		if(str[i]==word[0]){
			j=i,k=0;
			while(str[j]==word[k] && str[j]!='\0' && word[k]!='\0'){
				j++,k++;
			}
			if(word[k]=='\0'){
				i=j;
				found=true;
			}
		}
		remove[l++]=str[i++];
	}
	remove[l]='\0';
	if(found){
		cout<<"String After Removing All Occurrence: "<<remove;
	}else{
		cout<<"Word Not Found:";
	}
	return 0;
}