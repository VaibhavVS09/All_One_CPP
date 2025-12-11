// program to find power of a number using for loop

#include<iostream>

int main(){
	
	int base,expo,power,i;
	
	std::cout<<"Enter The Base\n";
	std::cin>>base;
	std::cout<<"Enter The Exponent\n";
	std::cin>>expo;
	
	i=1;
	while(i<=expo){
		power=base*i;
		i++;
	}
	std::cout<<"Power Of Number Is "<<power;
	
	return 0;
}