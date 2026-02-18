//program to trim leading white space characters from given string

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int start;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	start=0;
	while(str[start]==' '){
		start++;
	}
	cout<<"String After Trimming leading white space:"<<(str+start);
	return 0;
}