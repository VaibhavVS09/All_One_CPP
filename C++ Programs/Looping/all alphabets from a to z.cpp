//  program to print all alphabets from a to z. - using while loop

#include <iostream>
int main(){
	int a;
	a=97;
	while(a<=122){
		std::cout<<(char)a<<"\n";
		a++;
	}
	return 0;
}