//program to count frequency of each character in a string

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int frq[256]={0},i,j;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		frq[(int)str[i]]++;
		i++;
	}
	cout<<"Character Frequency:\n";
	for(j=0;j<256;j++){
		if(frq[j]>0){
			cout<<(char)j<<": "<<frq[j]<<"\n";
		}
	}
	return 0;
}
