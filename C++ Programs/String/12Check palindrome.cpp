//Check palindrome

#include<iostream>
using namespace std;
int main(){
	char str[100],temp;
	int i=0,mid=0,end=0,len=0;
	bool palindrome=true;
	cout<<"Enter The String To Check Palindrome\n";
	cin.getline(str,100);
	while(str[i]!='\0'){
		len++;
		i++;
	}
	mid=len/2;
	end=len-1;
	for(i=0;i<mid;i++){
		if(str[i]!=str[end]){
			palindrome=false;
			break;	
		}
		end--;
	}
	if(palindrome){
		cout<<"String Is Palindrome\n";
	}else{
		cout<<"String Is Not Palindrome\n";
	}
	
	return 0;
}

