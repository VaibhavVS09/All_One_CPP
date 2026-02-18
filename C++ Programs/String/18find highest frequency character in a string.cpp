//find highest frequency character in a string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i=0,j=0,cnt=0,freq=0,ind=0,len=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
 	for(i=0;i<len;i++){
		ch=str[i];
		cnt=0;
		for(j=0;j<len;j++){
			if(str[j]==ch && ch!=' '){
				cnt++;
			}
		}
		if(cnt>freq){
			freq=cnt;
			ind=i;
		}
	}
	
	cout<<"Highest Frequency Character Is: "<<str[ind]<<" With Frequency "<<freq;
	return 0;
}
