// program to count number of digits in a number.


#include <iostream>
int main(){
	int a,i,c;
	std::cout<<"Enter The Number\n";
	std::cin>>a;
	i=0;
	
	while(a>0){
		i++;
		a=a/10;
	}
	std::cout<<"Number Of Digits Is: "<<i;
	return 0;
}
