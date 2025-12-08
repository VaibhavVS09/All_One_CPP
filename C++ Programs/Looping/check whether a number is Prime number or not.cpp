// program to check whether a number is Prime number or not

#include<iostream>

int main(){
	
	int no,flag,i;
	
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	flag=0;
	i=2;
	while(i<(no/2)){
		if(no%i==0){
			flag=1;
			break;
		}else{
		flag=0;	
		}
	i++;
	}
	if(flag==0){
		std::cout<<"Number Is Prime Number";
	}else{
		std::cout<<"Number Is Not Prime Number";
	}
	return 0;
}