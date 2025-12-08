// program to find all prime factors of a number

#include<iostream>
int main(){	
	int no,i,j,flag;
	std::cout<<"Enter The Number\n";
	std::cin>>no;//99

	i=2,flag=0;
	while(i<=no){
		if(no%i==0){
			flag=1;
			j=2;
			while(j<=(i/2)){
				if(i%j==0){
					flag=0;
					break;
				}
				j++;
			}
			if(flag==1){
				std::cout<<"Prime factors of number :"<<i<<"\n";
			}
		}
		i++;
	}
	return 0;
}