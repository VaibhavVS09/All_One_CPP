//replace all occurrences of a character with another in a string

#include<iostream>
using namespace std;
int main(){
	char str[100],sch,rech;
	int i=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Charcter To Replace All Occurrence\n";
	cin>>sch;
	cout<<"Enter The Charcter For Replacement\n";
	cin>>rech;
	while(str[i]!='\0'){
		if(str[i]==sch){
			str[i]=rech;
		}
		i++;
	}
	cout<<"String After Replacing All Occurrence Character: "<<str;
	return 0;
}