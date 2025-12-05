//WAP to enter the three digit number and check number is palimdrome or not Palindrome means e.g   121  = 121  

#include<iostream>
using namespace std;

int main(){
	int no,start,mid,last,rev,temp;
	cout<<"Enter The Number\n";
	cin>>no;
	temp=no;
	start=no%10;
	no=no/10;
	mid=no%10;
	last=no=no/10;
	rev=(start*100)+(mid*10)+(last);
	if(temp==rev){
		cout<<"Number Is Palindrome\n";
	}else{
		cout<<"Number Is Not Palindrome\n";
	}
	return 0;
}