//  program to print all Strong numbers between 1 to n

#include<iostream>	
int main(){	
	int limit,no,sum,rem,i,j,temp,fact,k;
	std::cout<<"Enter The Number\n";
	std::cin>>limit;
	k=1;
	while(k<=limit){
	no=k;
	i=no, sum=0;
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
		std::cout<<"Strong Number Is "<<sum<<"\n";
	}
		k++;
	}
	return 0;
}