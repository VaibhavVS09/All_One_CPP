// program to find sum of all natural numbers between 1 to n. 


#include <iostream>
int main(){
	int a,i,c;
	std::cout<<"Enter The Limit\n";
	std::cin>>a;
	c=0;
	i=1;
	while(i<=a){
		c=c+i;
		i++;
	}
	std::cout<<"Sum Of Number Is: "<<c;
	return 0;
}