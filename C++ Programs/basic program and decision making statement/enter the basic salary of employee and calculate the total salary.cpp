//WAP enter the basic salary of employee and calculate the total salary using a following terms 
//da=30% hra=30% here we need to calculate the da and hra using basic salary  
//e.g suppose employee having basic salary 1000 then da=300 and hra=300 so total is 
//total=bs+da+hra means   total=1000+300+300  = total =1600

#include<iostream>
using namespace std;

int main(){
	int bsalary,tsalary;
	float da,hra;
	cout<<"Enter The Basic Salary Of Employee\n";
	cin>>bsalary;
	da=(bsalary/30)*10;
	hra=(bsalary/30)*10;
	cout<<"Total Salary Of Employee Is: "<<(bsalary+da+hra);
	
	return 0;
}