//  program to find sum of first and last digit of a number. 

#include<iostream>

int main(){
	
	int no,a,z,sum;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	
	z=no%10;
	while(no>9){
		no=no/10;
	}
	a=no;
	sum=a+z;
	std::cout<<"Sum Of Number Is: "<<sum;
	
	
	return 0;
}