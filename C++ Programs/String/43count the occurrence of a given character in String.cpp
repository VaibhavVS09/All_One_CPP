//count the occurrence of a given character in String

#include<iostream>
using namespace std;
int main(){
	char str[100],ch;
	int i,count;
	cout<<"Enter The String: \n";
	cin.getline(str,100);
	cout<<"Enter The Character: \n";
	cin>>ch;
	i=0,count=0;
	cout<<"Character Occurred At Index: ";
	while(str[i]!='\0'){
		if(str[i]==ch){
			count++;
			cout<<i<<"  ";
		}
		i++;
	}
	cout<<"\n";
	cout<<"Total Count If Occurrenc Is: "<<count;
	return 0;
}