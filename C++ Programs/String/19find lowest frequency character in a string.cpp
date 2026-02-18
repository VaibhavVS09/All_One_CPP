// find lowest frequency character in a string

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i=0,j=0,len=0,cnt=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	int ind=0;
	int freq=INT_MAX;	
	for(i=0;i<len;i++){
		ch=str[i];
		cnt=1;
		for(j=0;j<len;j++){
			if(str[j]==ch && i!=j){
				cnt++;
			}
		}
		if(cnt<freq){
			freq=cnt;
			cout<<freq<<"\n";
			ind=i;
		}
	}
		cout<<"Lowest Frequency Character Is: "<<str[ind]<<" With Frequency "<<freq;
	return 0;
}