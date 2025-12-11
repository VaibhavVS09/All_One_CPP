//  program to print multiplication table of any number


#include <iostream>
int main(){
	int a,i,c;
	std::cout<<"Enter The Number\n";
	std::cin>>a;
	i=1;
	std::cout<<"Multiplication Table Of "<<a<<" Is:\n";
	while(i<=10){
		std::cout<<(a*i)<<"\n";
		i++;
	}
	return 0;
}