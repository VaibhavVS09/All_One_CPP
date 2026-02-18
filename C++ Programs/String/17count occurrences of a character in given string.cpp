//count occurrences of a character in given string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i=0,count=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Count It's All Occurrence\n";
	cin>>ch;
	while(str[i]!='\0'){
		if(str[i]==ch){
			count++;
		}
		i++;
	}
	if(count!=0){
		cout<<"The Character All Occurrence Count Is: \n"<<count;
	}else{
		cout<<"Character Occurrence Not Found\n";
	}
	return 0;
}