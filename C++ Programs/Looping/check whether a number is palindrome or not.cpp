// program to check whether a number is palindrome or not

#include<iostream>

int main(){
	
	int no,temp,cnt,rev,rem,i;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	cnt=0,rev=0;
	temp=no;
	while(no>0){
		cnt++;
		no=no/10;
	}
	no=temp;
	i=0;
	while(i<cnt){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
		i++;
	}
	no=temp;
	if(no==rev){
		std::cout<<"Number Is Palindrome";	
	}else{
		std::cout<<"Number Is Not Palindrome";	
	}
	
	return 0;
}

