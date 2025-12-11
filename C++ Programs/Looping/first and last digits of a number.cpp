// program to swap first and last digits of a number 

#include<iostream>

int main(){
	
	int no,first,last,mid,temp,cnt,x;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	
	last=no%10;
	temp=no;
	cnt=0;
	while(no>9){
		no=no/10;
		cnt++;
	}
	first=no;
	no=temp;
	x=1;
	while(cnt>0){
		x=x*10;
		cnt--;
	}
	mid=(no/10)%(x/10);
	no=last*x+mid*10+first;
	
	std::cout<<"Number After Swpping Is "<<no;
	
	return 0;
}