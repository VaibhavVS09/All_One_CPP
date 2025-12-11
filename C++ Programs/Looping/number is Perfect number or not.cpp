// program to check whether a number is Perfect number or not

#include<iostream>	
int main(){	
	int no,sum,rem,i,j,temp;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	temp=no;
	i=1,sum=0;
	while(i<no){
		if(no%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==temp){
		std::cout<<"Number Is Perfect Number\n";
	}else{
		std::cout<<"Number Is Not Perfect Number\n";
	}	
	return 0;
}