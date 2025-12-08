//  program to print all Perfect numbers between 1 to n

#include<iostream>	
int main(){	
	int limt,no,sum,rem,i,j,temp;
	std::cout<<"Enter The Number\n";
	std::cin>>limt;
	j=1;
	while(j<=limt){
	no=j;
	temp=no;
	i=1,sum=0;
	while(i<no){
		if(no%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==temp){
		std::cout<<"Number Is Perfect Number "<<temp<<"\n";
	}
		j++;
	}	
	return 0;
}