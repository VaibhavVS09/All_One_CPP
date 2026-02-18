//check if String is Palindrom

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[100];
	int i,len;
	bool palindrom=true;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	len=strlen(str);n
	for(i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			palindrom=false;
			break;
		}
	}
	if(palindrom){
		cout<<"String Is Palindorm";
	}else{
		cout<<"String Is Not Palindrom";
	}
	return 0;
}