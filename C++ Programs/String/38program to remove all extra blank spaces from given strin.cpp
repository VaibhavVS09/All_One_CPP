//program to remove all extra blank spaces from given string

#include<iostream>
using namespace std;
int main(){
	char str[100],remove[100];
	int i=0,j=0;
	cout<<"Enter The String:\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if(str[i]!=' '){
			remove[j++]=str[i];
		}
		i++;
	}
	remove[j]='\0';
	cout<<"String After Removing Extra Blank Spaces:"<<remove;
	return 0;
}