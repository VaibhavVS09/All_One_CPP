//replace last occurrence of a character with another in a string

#include<iostream>
using namespace std;
int main(){
	char str[100],sch,rech;
	int i=0,index=0;
	cout<<"Enter The String\n";
	cin.getline(str,100);
	cout<<"Enter The To Replace Last Occurrence\n";
	cin>>sch;
	cout<<"Enter The Replacement Character\n";
	cin>>rech;
	while(str[i]!='\0'){
		if(str[i]==sch){
			index=i;
		}
		i++;
	}
	str[index]=rech;
	cout<<"String After Replacing Character Last Occurrence: "<<str;
	
	return 0;
}