//WAP to enter the three number and check which is greater using decision making statement

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter The 1st Number\n";
	cin>>a;
	cout<<"Enter The 2nd Number\n";
	cin>>b;
	cout<<"Enter The 3rd Number\n";
	cin>>c;
	if((a>b)&&(a>c)){
		cout<<"The Greater Number Is: "<<a;
	}else if((b>a)&&(b>c)){
		cout<<"The Greater Number Is: "<<b;
	}else{
		cout<<"The Greater Number Is: "<<c;
	}
	return 0;
}