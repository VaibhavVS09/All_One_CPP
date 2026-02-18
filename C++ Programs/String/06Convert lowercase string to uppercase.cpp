//Convert lowercase string to uppercase

#include<iostream>
using namespace std;
int main(){
	char str[100];
	int i=0;
	cout<<"Enter The String For Converting To Uppercase\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
		i++;
	}
	cout<<"String After Converting: "<<str;
	return 0;
}