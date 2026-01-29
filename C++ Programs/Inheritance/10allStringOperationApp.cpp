/*WAP to create the class name as StringOperation with method name as void performOperation(String), child class names are ConvertToUpper,MaxRepetativeChar
 WordReverse*/
#include<iostream>
using namespace std;
class StringOperation{
	public:
		virtual void performOperation(const char* s)=0;
};
class ConvertToUpper:public StringOperation{
	private:
		char str[100];
	public:
		void performOperation(const char* s){
			strncpy(str,s,100);
			str[sizeof(str)-1]='\0';
			int i=0;
			while(str[i]!='\0'){
				if(str[i]>='a' && str[i]<='z'){
					str[i]-=32;
				}
//				}else if(str[i]>='a'&& str[i]<='z'){
//					str[i]-=32;
//				}
				i++;
			}
			cout<<"\nString after converting upper:"<<str;
		}
};
class MaxRepetativeChar:public StringOperation{
	private:
		char str[100];
		int i,j,cnt,feq,len,index;
	public:
		void performOperation(const char* s){
			strncpy(str,s,100);
			str[sizeof(str)-1]='\0';
				len=strlen(str);
			feq=0;
			for(i=0;i<len;i++){
				cnt=0;
				for(j=0;j<len;j++){
					if(str[i]==str[j]){
						cnt++;
					}
				}
				if(feq<cnt){
					feq=cnt;
					index=i;
				}
			}
			cout<<"\nMax repetative char form string is: "<<str[index];
		}
};
class WordReverse:public StringOperation{
	private:
		char str[100],temp;
		int i,start,len,size,end,j;
	public:
		void performOperation(const char* s){
			strncpy(str,s,100);
			str[sizeof(str)-1]='\0';
			len=strlen(str);
			start=0;
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
			
		}
};
int main(){
	char s[100];
	int choise,con;
	cout<<"Enter the string\n";
	cin.getline(s,100);
	StringOperation* so;
	do{
		cout<<"\n----------------------\n";
		cout<<"1---->For convert to upper string\n";
		cout<<"2---->For finding max. repetative char in string\n";
		cout<<"3---->For word reverse in string\n";
		cin>>choise;
		switch(choise){
			case 1:{
				so=new ConvertToUpper();
				so->performOperation(s);
				delete so;
				break;
			}
			case 2:{
				so=new MaxRepetativeChar();
				so->performOperation(s);
				delete so;
				break;
			}
			case 3:{
				so=new WordReverse();
				so->performOperation(s);
				delete so;
				break;
			}
			default:
				cout<<"Wrong input\n";
		}
		cout<<"\nIf you want to continue PRESS:---1\n";
		cin>>con;
	}while(con==1);
	return 0;
}