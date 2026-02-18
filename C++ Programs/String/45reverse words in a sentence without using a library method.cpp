//reverse words in a sentence without using a library method

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i,j,k,len,start,end;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	i=0;
	while(str[i]!='\0'){
		len++;
		i++;
	}
	start=0;
	cout<<"String After Reversing Word\n";
	for(i=0;i<len;i++){
		if(str[i]==' '||i==len-1){
			end=(i==0) ? 0:(i-1);
			for(j=end;j>=start;j--){
				cout<<str[j];
			}
			if(i!=0){
				cout<<" ";
				start=i;
			}
		}
	}
	return 0;		
}