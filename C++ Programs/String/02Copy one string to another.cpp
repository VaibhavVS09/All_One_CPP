//Copy one string to another

#include<iostream>
using namespace std;

int main(){
	char str1[100],str2[100];
	int i=0;
	cout<<"Enter The String For Copy\n";
	cin.getline(str1,100);
	
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	cout<<"String After Copy: "<<str2;
	return 0;
}