// program to print all Prime numbers between 1 to n

#include<iostream>
int main(){
	
	int no,flag,i,m;
	
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	flag=0;
	m=2;
	while(m<=no){
		flag=0;
		i=2;
		while(i<=(m/2)){
			if(m%i==0){
			flag=1;
			break;
		}else{
		flag=0;	
		}
	i++;
	}
	if(flag==0){
		std::cout<<"Number Is Prime Number "<<m<<"\n";
	}
	m++;
	}
	return 0;
}