// Count words in a string

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0,count=0;
	bool word=true;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if(str[i]==' '&&word){
			count++;
			word=false;
		}else if(str[i]!=' '){
			word=true;
		}
		i++;
	}
	if(str[i]=='\0' && str[i-1]!=' '){
	count++;	
	}
	cout<<"Count Of Words In String Is: "<<count;
	return 0;
}

