//  program to print all even numbers between 1 to 100. - using while loop


#include <iostream>
int main(){
	int a=1;
	std::cout<<"All Even Numbers Upto 100\n";
	while(a<=100){
		if(a%2==0){
		std::cout<<a<<"\n";
		}
		a++;
	}
	return 0;
}