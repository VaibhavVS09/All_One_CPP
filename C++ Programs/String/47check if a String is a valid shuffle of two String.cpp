//check if a String is a valid shuffle of two String

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[50],str2[50],shuffle[100];
	int i,j,k,len1,len2,len3;
	bool vaild=true;
	cout<<"Enter The 1st String\n";
	cin.getline(str1,50);
	cout<<"Enter The 2nd String\n";
	cin.getline(str2,50);
	cout<<"Enter The Shuffle String\n";
	cin.getline(shuffle,100);
	len1=strlen(str1);
	len2=strlen(str2);
	len3=strlen(shuffle);
	if(len1+len2!=len3){
		cout<<"Both String Are Not Vaild To Shuffle";
		return 0;
	}
	i=0,j=0,k=0;
	while(shuffle[k]!='\0'){
		if(i<len1 && shuffle[k]==str1[i]){
			i++;
		}else if(j<len2 && shuffle[k]==str2[j]){
			j++;
		}else{
			vaild=false;
			break;
		}
		k++;
	}
	if(vaild){
		cout<<"Both String Are Vaild To Shuffle";
	}else{
		cout<<"Both String Are Not Vaild To Shuffle";
	}
	return 0;
}