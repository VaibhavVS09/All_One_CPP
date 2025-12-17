/* WAP to Reverse the string using a constructor  
Here we need to create the class name as ReverseString with a following constructor and method. 
*/
#include<iostream>
#include<cstring>
using namespace std;
class ReverseString{
	private:
		char s[100],temp;
	public:
	ReverseString(const char* str){
		strncpy(s,str,sizeof(str));
		s[sizeof(str)-1]='\0';
	}
	void beforeString(){
		cout<<"Srting Befor Reverse: "<<s;
	}
	void afterString(){
		int size=strlen(s);
		int mid=size/2;
		for(int i=0;i<mid;i++){
			temp=s[i];
			s[i]=s[size-1-i];
			s[size-1-i]=temp;
		}
		cout<<"\n String After Reverse: "<<s;
	}
};
int main(){
	char str[100];
	cout<<"Enter the string: \n";
	cin.getline(str,100);
	ReverseString s(str);
	s.beforeString();
	s.afterString();
	
}