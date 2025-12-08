// program to print all natural numbers in reverse (from n to 1). using while loop 

#include <iostream>
int main(){
	int a,i;
	std::cout<<"Enter The Limit";
	std::cin>>a;
	i=1;
	while(i<=a){
		std::cout<<a<<"\n";
		a--;
	}
	return 0;
}