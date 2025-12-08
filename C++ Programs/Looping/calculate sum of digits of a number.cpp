// program to calculate sum of digits of a number

#include<iostream>

int main(){
	
	int no,sum;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	sum=0;
	while(no>0){
		sum=sum+(no%10);
		no=no/10;
	}
	
	std::cout<<"Sum Of Digits Is "<<sum;
	
	return 0;
}