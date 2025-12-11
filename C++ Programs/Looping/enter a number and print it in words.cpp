// program to enter a number and print it in words

#include<iostream>

int main(){
	
	int no,temp,i;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
    
    temp=0;
    while(no!=0){
    	temp=(temp*10)+(no%10);
    	no=no/10;
	}
	
	while(temp!=0){
		switch(temp%10){
			case 0:
				std::cout<<"Zero";
				break;
			case 1:
				std::cout<<"One";
				break;
			case 2:
				std::cout<<"Two";
				break;
			case 3:
				std::cout<<"Three";
	     		break;
	     	case 4:
	     		std::cout<<"Four";
	     		break;
	     	case 5:
	     		std::cout<<"Five";
	     		break;
	     	case 6:
	     		std::cout<<"Six";
	     		break;
	     	case 7:
	     		std::cout<<"Seven";
	     		break;
	     	case 8:
	     		std::cout<<"Eight";
	     		break;
	     	case 9:
	     		std::cout<<"Nine";
	     		break;
		}
		temp=temp/10;
	}
	return 0;
}

