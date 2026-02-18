//program to print first non-repeated character from String

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[100];
	int i,j,count,len,index;
	cout<<"Enter The String: \n";
	cin.getline(str,100);
	len=strlen(str);
	for(i-0;i<len;i++){
		count=0;
		for(j=0;j<len;j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		if(count==1){
			index=i;
			break;
		}
	}
	cout<<"First Non-Repeated Character From String Is: "<<(str[index]);
	return 0;
}