//search all occurrences of a character in given string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i=0,pos=-1;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Find It's All Occurrence\n";
	cin>>ch;
	cout<<"The Character All Occurrence Position Are: ";
	while(str[i]!='\0'){
		if(str[i]==ch){
			pos=i;
			cout<<pos<<" ";
		}
		i++;
	}
	if(pos==-1){
		cout<<"Character Occurrence Not Found\n";
	}
	return 0;
}