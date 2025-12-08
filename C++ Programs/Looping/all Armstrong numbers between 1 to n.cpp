//   program to print all Armstrong numbers between 1 to n

#include<iostream>
int main(){	
	int limit,no,arm,temp,i,j,k,m,cnt,rem;
	std::cout<<"Enter The Number\n";
	std::cin>>limit;
	m=1;
	while(m<=limit){
	no=m;
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
		std::cout<<"Armstrong Number Is: "<<arm<<"\n";
	}
		m++;
	}
	return 0;
}