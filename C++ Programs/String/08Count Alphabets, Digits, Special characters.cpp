//Count Alphabets, Digits, Special characters

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0,alph=0,digit=0,schar=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if((str[i]>='A'&&str[i]>='Z')||(str[i]>='a'&&str[i]<='z')){
			alph++;
		}else if(str[i]>='0'&&str[i]<='9'){
			digit++;
		}else{
			schar++;
		}
		i++;
	}
	cout<<"Count Of Alphabets Is: "<<alph<<"\n";
	cout<<"Count Of Digits Is: "<<digit<<"\n";
	cout<<"Count Of Special characters Is: "<<schar<<"\n";
	
	return 0;
}

