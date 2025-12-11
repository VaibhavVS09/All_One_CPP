// program to check whether a number is Strong number or not

#include<iostream>	
int main(){	
	int no,sum,rem,i,j,temp,fact;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	i=no,sum=0;
	while(i>0){	
		fact=1,j=1;
		rem=i%10;
		while(j<=rem){
			fact=fact*j;
			j++;
		}
		sum=sum+fact;
		i=i/10;
	}
	if(no==sum){
		std::cout<<"Number Is Strong Number\n";
	}else{
		std::cout<<"Number Is Not Strong Number\n";	
	}
	return 0;
}