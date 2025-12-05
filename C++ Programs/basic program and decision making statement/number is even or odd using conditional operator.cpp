//WAP to enter the number and check number is even or odd using conditional operator 

#include<iostream>
using namespace std;

int main(){
	int no;
	cout<<"Enter The Number\n";
	cin>>no;
	(no%2==0) ? cout<<"Number Is Even" : cout<<"Number Is Odd";
	return 0;
}