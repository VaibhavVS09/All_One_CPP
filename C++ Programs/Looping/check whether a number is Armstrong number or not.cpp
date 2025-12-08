//  program to check whether a number is Armstrong number or not

#include<iostream>
int main(){	
	int no,arm,temp,i,j,k,cnt,rem;
	std::cout<<"Enter The Number\n";
	std::cin>>no;
	temp=no,cnt=0;
	while(no>0){
		cnt++;
		no=no/10;
	}
	no=temp;
	i=1,arm=0;
	while(i<=cnt){
		rem=no%10;
		j=1,k=1;
		while(j<=cnt){
			k=k*rem;
			j++;
		}
		arm=arm+k;
		no=no/10;
		i++;
	}	
	if(temp==arm){
		std::cout<<"Number Is Armstrong Number \n";
	}else{
		std::cout<<"Number Is Not Armstrong Number \n";
	}

	return 0;
}