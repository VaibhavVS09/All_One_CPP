//create the class name as ConvertToUpper with a following methods void setCharArray(char ch[]), void convertToUpperCase():-converting logic, void show()
#include<iostream>
#include<cstring>
using namespace std;
class ConverToUpper{
	private:
		char str[100];
		int i;
	public:
		void setCharArray(const char* ch){
			strncpy(str,ch,sizeof(ch));
			str[sizeof(str-1)]='\0';
		}
		void convertToUpperCase(){
			i=0;
			while(str[i]!='\0'){
				if(str[i]>='a'&&str[i]<='z'){
					str[i]-=32;
				}
				i++;
			}
		}
		void show(){
			cout<<"String after converting uppercase:\n"<<str;
		}
};
int main(){
	char s[100];
	cout<<"Enter the string to convert:\n";
	cin.getline(s,100);
	ConverToUpper ctp;
	ctp.setCharArray(s);
	ctp.convertToUpperCase();
	ctp.show();
	return 0;
}