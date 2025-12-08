// program to calculate factorial of a number

#include<iostream>

int main(){
	
	int no,temp,fact;
	
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	temp=no;
	fact=1;
	while(no>0){
		fact=fact*no;
		no--;
	}
		std::cout<<"Factorial Of Number Is "<<fact;
	
	return 0;
}