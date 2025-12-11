// program to find sum of all prime numbers between 1 to n

#include<iostream>

int main(){
	
	int no,i,m,sum,flag;
	std::cout<<"Enter The Number\n";
	std::cin>>no;

	i=2,flag=0,sum=0;
	while(i<=no){
		m=2,flag=0;
		while(m<=(i/2)){
			if(i%m==0){
				flag=1;
			}
			m++;
		}
			if(flag==0){
				sum=sum+i;
			}
		i++;
	}
	std::cout<<"Sum Of All Prime Numbers: "<<sum;
	return 0;
}