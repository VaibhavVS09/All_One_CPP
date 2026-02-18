//replace first occurrence of a character with another in a string

#include<iostream>
using namespace std;
int main(){
	char str[100],sch,rech;
	int i=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The Character To Replace 1st Occurrence\n";
	cin>>sch;
	cout<<"Enter The Replacement Character\n";
	cin>>rech;
	while(str[i]!='\0'){
		if(str[i]==sch){
			str[i]=rech;
			break;
		}
		i++;
	}
	cout<<"String After Replacing 1st Occurrence Character: "<<str;
	return 0;
}