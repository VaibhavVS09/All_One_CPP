//program to trim trailing white space characters from given string

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int end;
	cout<<"Enter The String:\n";
	cin.getline(str,100);
	end=0;
	while(str[end]!='\0'){
		end++;
	}
	end--;
	while(end>=0 && str[end]==' '){
		end--;
	}
	str[end+1]='\0';
	cout<<"String After Trimming Trailing White Space:"<<str;
	return 0;
}