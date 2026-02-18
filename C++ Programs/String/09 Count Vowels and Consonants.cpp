// Count Vowels and Consonants

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0,vowel=0,consonant=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
			char lowercase=(str[i]>='A'&&str[i]<='Z') ? (str[i]=str[i]+32) : str[i];
			if(lowercase=='a'|| lowercase=='e'|| lowercase=='i'|| lowercase=='o'|| lowercase=='u'){
				vowel++;
			}else{
				consonant++;
			}
		}else{
			cout<<"No Vowels And Consonants Are Presnt In Giving String\n";
		}
		i++;
	}
	cout<<"Vowels Count Are: "<<vowel<<"\n";
	cout<<"Consonants Count Are: "<<consonant<<"\n";
	return 0;
}

