// program to print Fibonacci series up to n terms

#include<iostream>	
int main(){	
	int limit,a,b,c,i;
	std::cout<<"Enter The Number\n";
	std::cin>>limit;
	a=0,b=0,c=1;
	i=1;
	while(i<=limit){
		std::cout<<b<<" ";
		a=b;
		b=c;
		c=a+b;
		i++;
	}
	return 0;
}