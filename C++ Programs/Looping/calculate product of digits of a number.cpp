// program to calculate product of digits of a number

#include<iostream>

int main(){
	
	int no,prod;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	prod=1;
	while(no>0){
		prod=prod*(no%10);
		no=no/10;
	}
	
	std::cout<<"Product Of Digits Is "<<prod;
	
	return 0;
}