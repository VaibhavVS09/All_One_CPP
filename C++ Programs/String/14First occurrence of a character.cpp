//First occurrence of a character

#include<iostream>
using namespace std;

int main(){
	char str[100],ch;
	int i=0,len=0,pos=-1;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Find It's 1st Occurrence\n";
	cin>>ch;
	while(str[i]!='\0'){
		if(str[i]==ch){
			pos=i;
			break;
		}
		i++;
	}
	if(pos!=-1){
		cout<<"The Character 1st Occurrence Is: \n"<<pos;
	}else{
		cout<<"Character Occurrence Not Found\n";
	}
	return 0;
}

