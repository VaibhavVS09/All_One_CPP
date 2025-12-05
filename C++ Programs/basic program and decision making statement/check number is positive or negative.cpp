//WAP to enter the number and check number is positive or negative

#include<iostream>
using namespace std;

int main(){
	int no;
	cout<<"Enter The Number\n";
	cin>>no;
	//1st way
	(no>0)? cout<<"Number Is Positive\n":cout<<"Number Is Negative\n";
	//2nd way
	if(no>0){
		cout<<"Number Is Positive\n";
	}else{
		cout<<"Number Is Negative\n";
	}
	return 0;
}