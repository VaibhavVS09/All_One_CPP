//Concatenate two strings

#include<iostream>
using namespace std;
int main(){
	char str1[100],str2[100];
	int i=0,j=0;
	cout<<"Enter The 1st String\n";
	cin.getline(str1,100);
	cout<<"Enter The Second String\n";
	cin.getline(str2,100);
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	cout<<"Both String After Concatenation: "<<str1;
	return 0;
}