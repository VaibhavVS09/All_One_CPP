//.WAP to enter the six subject marks of student and calculate its percentage and if per >80 and per<=100 then student in distinction ,if per >60 && 
//per<=80 then student in first division and if per>50 && per<=60 then in second division if per>40 && per<=50 then student in second division 
//and per <40 then student get failed.

#include<iostream>
using namespace std;

int main(){
	int s1,s2,s3,s4,s5,s6,total;
	float per;
	cout<<"Enter The 6 Subject Marks Of Student\n";
	cin>>s1>>s2>>s3>>s4>>s5>>s6;
	total=s1+s2+s3+s4+s5+s6;
	per=total/6;
	cout<<"Percentage Is: "<<per<<"%\n";
	if((per>80)&&(per<=100)){
		cout<<"Student Passed With Distinction\n";
	}else if((per>60)&&(per<=80)){
		cout<<"Student Passed With First Division\n";
	}else if((per>50)&&(per<=60)){
		cout<<"Student Passed With Second Division\n";
	}else if((per>40)&&(per<=50)){
		cout<<"Student Passed With Thrid Division\n";
	}else{
		cout<<"Student Failed\n";
	}
	return 0;
}