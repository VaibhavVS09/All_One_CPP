//WAP to enter the year and check year is leap year or not Leap year means year divide by 4

#include<iostream>
using namespace std;

int main(){
	int year;
	cout<<"Enter The Year\n";
	cin>>year;
	if(year%4==0){
		cout<<"Year Is Leap Year\n";
	}else{
		cout<<"Year Is Not Leap Year\n";
	}
	return 0;
}