//search all occurrences of a word in given string

#include<iostream>
using namespace std;
int main(){
	char str[100],word[100];
	int i=0,j=0,k=0;
	bool found=false;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Word To Find It's All Occurrence\n";
	cin.getline(word,100);
	while(str[i]!='\0'){
		if(str[i]==word[0]){
			j=i;k=0;
			while(str[j]==word[k] && str[j]!='\0' && word[k]!='\0'){
				j++;
				k++;
			}
			if(word[k]=='\0'){
				cout<<"Word Found At Index: "<<i<<"\n";
				found=true;
			}
		}
		i++;
	}
	if(!found){
		cout<<"Word Not Found";
	}
	return 0;
}
