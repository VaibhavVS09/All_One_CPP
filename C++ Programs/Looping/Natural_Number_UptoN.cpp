// program to print all natural numbers from 1 to n. - using while loop

#include <iostream>
int main(){
	int a,i;
	std::cout<<"Enter The Limit";
	std::cin>>a;
	i=1;
	while(i<=a){
		std::cout<<i<<"\n";
		i++;
	}
	return 0;
}