//Find length of a string

#include<iostream>
using namespace std;

int main(){
	char str[100];
	int len=0;
	cout<<"Enter The Name\n";
	cin.getline(str,100);
	
	while(str[len]!='\0'){
		len++;
	}
	cout<<"Length Of Name Is: "<<len;
	return 0;
}