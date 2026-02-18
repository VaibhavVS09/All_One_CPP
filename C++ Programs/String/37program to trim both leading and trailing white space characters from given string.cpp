// program to trim both leading and trailing white space characters from given string

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int start,end,i;
	cout<<"Enter The String:\n";
	cin.getline(str,100);
	start=0;
	while(str[start]==' '){
		start++;
	}
	end=0;
	while(str[end]!='\0'){
		end++;
	}
	end--;
	while(end>=0 && end==' '){
		end--;
	}
	str[end+1]='\0';
	cout<<"String After Trimming Both Leading And Trailing White Space:\n";
	for(i=start;i<end;i++){
		cout<<str[i];
	}
	return 0;
}