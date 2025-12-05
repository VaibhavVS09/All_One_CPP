//WAP to enter the three digit number and reverse it e.g 123    321 

#include<iostream>
using namespace std;

int main(){
	int no,first,mid,last,revno,temp;
	cout<<"Enter The Number\n";
	cin>>no;//123
	temp=no;
	first=no%10;//3
	no=no/10;//12
	mid=no%10;//2
	last=no/10;//1
	revno=(first*100)+(mid*10)+last;
	cout<<"Reverse Number Is: "<<revno;
	return 0;
}
