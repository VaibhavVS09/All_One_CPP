//return highest occurred character in a String

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[100],ch;
	int i,j,len,cnt,freq,ind;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	len=strlen(str);
	cnt=0,freq=0;
	for(i=0;i<len;i++){
		cnt=0;
		ch=str[i];
		for(j=0;j<len;j++){
			if(ch==str[j]){
				cnt++;
			}
		}
		if(cnt>freq){
			freq=cnt;
			ind=i;
		}
	}
	cout<<"Highest Occurred Character In String: "<<str[ind];
	return 0;
}