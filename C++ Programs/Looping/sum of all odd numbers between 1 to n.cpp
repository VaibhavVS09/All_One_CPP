//  program to find sum of all odd numbers between 1 to n.


#include <iostream>
int main(){
	int a,i,c;
	std::cout<<"Enter The Limit\n";
	std::cin>>a;
	c=0;
	i=1;
	while(i<=a){
		if(i%2!=0)
		c=c+i;
		i++;
	}
	std::cout<<"Sum Of Number Is: "<<c;
	return 0;
}