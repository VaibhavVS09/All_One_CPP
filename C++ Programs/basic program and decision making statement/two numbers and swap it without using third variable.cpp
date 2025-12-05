//WAP to enter the two numbers and swap it without using third variable

#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter The 1st Number\n";
	cin>>a;//10
	cout<<"Enter The 2nd Number\n";
	cin>>b;//20
	
	a=a+b;//30
	b=a-b;//10
	a=a-b;//20
	
	cout<<"After Swapping Number 1st Number Is: "<<a<<" And 2nd Number Is: "<<b<<"\n";
	return 0;
}
