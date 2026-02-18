//Compare two strings

#include<iostream>
using namespace std;
int main(){
	char str1[100],str2[100];
	int i=0;
	bool same=true;
	cout<<"Enter The 1st String For Comparison\n";
	cin.getline(str1,100);
	cout<<"Enter The 2nd String For Comparison\n";
	cin.getline(str2,100);
	while(str1[i]!='\0'||str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			same=false;
			break;
		}
		i++;
	}
	if(same){
		cout<<"Both string Are Same\n";
	}else{
		cout<<"Both String Are Not Same\n";
	}
	return 0;
}