//  program to find first and last digit of a number. 


#include <iostream>
int main(){
	int no,i,a,z;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	i=0;
	z=no%10;
	while(no>9){
		no=no/10;
	}
	a=no;
	std::cout<<"First Digits Is: "<<a<<"\n";
	std::cout<<"Last Digits Is: "<<z<<"\n";
	return 0;
}
