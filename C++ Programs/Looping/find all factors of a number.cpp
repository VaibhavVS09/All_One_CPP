// program to find all factors of a number

#include<iostream>

int main(){
	
	int no,i;
	
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	i=1;
	std::cout<<"Factor Of Number Is \n";
	while(i<=no){
		if(no%i==0){
			std::cout<<i<<" ";
		}
		i++;
	}
	
	return 0;
}