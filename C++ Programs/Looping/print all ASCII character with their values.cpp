//  program to print all ASCII character with their values

#include<iostream>

int main(){
	
	int i;
	
	i=0;
	while(i<=255){
		std::cout<<"ASCII Value Of Character "<<(char)i<<" = "<<i<<"\n";
		i++;
	}
	
	return 0;
}

