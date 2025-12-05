// WAP to enter the three digit number and calculate its sum1 e.g 123 =1+2+3=6 

#include<iostream>
using namespace std;

int main(){
	int no,sum,rem;
	cout<<"Enter The Number\n";
	cin>>no;
	sum=0;
	rem=no%10;
	sum=sum+rem;
	no=no/10;
	rem=no%10;
	sum=sum+rem;
	no=no/10;
	sum=sum+no;
	cout<<"Sum Of Digit Is: "<<sum;
	return 0;
}