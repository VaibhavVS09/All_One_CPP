//check strings are anagram to each other or not 

#include<iostream>
#include<cstring>
using namespace std;

void sortString(char ch[], int len){
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(ch[i]>ch[j]){
				char temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
};

int main(){
	char str1[100],str2[100];
	int i,j,len1,len2;
	bool anagram=true;
	cout<<"Enter The 1st String: \n";
	cin.getline(str1,100);
	cout<<"Enter The 2nd String: \n";
	cin.getline(str2,100);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2){
		 sortString(str1,len1);
		 sortString(str2,len2);
		for(i=0;i<len1;i++){
			if(str1[i]!=str2[i]){
				cout<<"Both String Are Not Anagram:";
				anagram=false;
				break;
			}
		}
	}else{
		cout<<"Both String Are Not Anagram:";
	}
	if(anagram){
		cout<<"Both String Are Anagram: ";
	}
	return 0;
}

