//count occurrences of a word in a given string

#include<iostream>
using namespace std;
int main(){
	char str[100],word[100];
	int i=0,j,k,count=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Word To Count It's Occurrence\n";
	cin.getline(word,100);
	while(str[i]!='\0'){
		if(str[i]==word[0]){
			j=i,k=0;
			while(str[j]==word[k] && str[j]!='\0' && word[k]!='\0'){
				j++,k++;
			}
			if(word[k]=='\0'){
				count++;
			}
		}
		i++;
	}
	if(count>0){
		cout<<"Occurrenece Of "<<word<<" In String Are: "<<count;
	}else{
		cout<<"Word Not Found";
	}
	return 0;
}