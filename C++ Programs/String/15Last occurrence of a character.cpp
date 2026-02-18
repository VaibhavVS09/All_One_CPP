//Last occurrence of a character

#include<iostream>
using namespace std;

int main(){
	char str[100],ch;
	int i=0,pos=-1;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Find It's Last Occurrence\n";
	cin>>ch;
	while(str[i]!='\0'){
		if(str[i]==ch){
			pos=i;
		}
		i++;
	}
	if(pos!=-1){
		cout<<"The Character Last Occurrence Position Is: \n"<<pos;
	}else{
		cout<<"Character Occurrence Not Found\n";
	}
	return 0;
}