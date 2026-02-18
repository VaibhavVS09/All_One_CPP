//Toggle case of each character

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0;
	cout<<"Enter The String For Toggle\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]=str[i]+32;
		}else if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
	cout<<"String After Toggle: "<<str;
	return 0;
}