/* WAP to Encrypt the string using a constructor  
Here we need to create the class name as Encrypt with a following constructor and method. 
Input string :  abcdabcdccddaabb 
Ouput :  a4b4c4d4*/

#include<iostream>
#include<cstring>
using namespace std;
class Encrypt{
	private:
		char str[100],ch;
	public:
		int i,j,cnt,len;
		Encrypt(const char *s){
			strncpy(str,s,100);// coping local string into instance string
			str[sizeof(str)-1]='\0';// making last end null
		}
		void beforeEncrypt(){
			cout<<"String Befor Encryption:\n"<<str;
		}
		void afterEncrypt(){
			cout<<"\nString After Encryption:\n";
			len=strlen(str);
			for(i=0;i<len;i++){
				cnt=1;
				for(j=i+1;j<len;j++){
					if(str[i]==str[j]){
					     str[j]=-1;	
						cnt++;
					}
				}
				if(cnt>0&&str[i]!=-1){
					cout<<str[i]<<cnt;
				}	
			}
		}
};
int main(){
	char str[100];
	cout<<"Ente The String\n";
	cin.getline(str,100);
	Encrypt e(str);
	e.beforeEncrypt();
	e.afterEncrypt();
	return 0;
}
