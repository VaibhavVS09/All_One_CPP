// remove all repeated characters from a given string

#include<iostream>
using namespace std;
int main(){
	char str[200];
	int i=0,j=0,k=0,len=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	for(i=0;i<len;i++){
		for(j=i+1;j<len;){
			if(str[i]==str[j]){
				for(k=j;k<len;k++){
					str[k]=str[k+1];
				}
				len--;
				str[len]='\0';
			}else{
				j++;
			}
		}
	}
	cout<<"String After Removing Repeated Character: "<<str;
	
	return 0;
}



