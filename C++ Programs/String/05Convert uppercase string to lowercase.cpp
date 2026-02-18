//Convert uppercase string to lowercase

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0;
	cout<<"Enter The String To Convert Lowercase\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]=str[i]+32;
		}
		i++;
	}
	cout<<"String After Converting Lowercase: "<<str;
	
	return 0;
}