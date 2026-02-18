// program check if a String contains only digits

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i;
	bool digit=false;
	cout<<"Enter The String: \n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if(str[i]>='0'&&str[i]<='9'){
			digit=true;
		}
		i++;
	}
	if(digit){
		cout<<"String Contain Digits: ";
	}else{
		cout<<"String Does Not Conatain Digits: ";
	}
	return 0;
}