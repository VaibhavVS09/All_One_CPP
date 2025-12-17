/*create the class name as Salary with a following constructor and methods  
The major purpose of this program is calculate the salary of employee as per his present 
days using a constructor.*/

#include<iostream>
using namespace std;
class Salary{
	public:
	 	int id,presentDay,salaryPerDay,finalSalary;
		string name,contact;
		Salary(int &id,string &name,string &contact,int &presentDay,int &salaryPerDay){
			this->id=id;
			this->name=name;
			this->contact=contact;
			this->presentDay=presentDay;
			this->salaryPerDay=salaryPerDay;	
		}
		void calculateSalary(){
			finalSalary=presentDay*salaryPerDay;
		}
		void show(){
			cout<<"Name Of Employee: "<<name<<"\n";
			cout<<name<<" Present Day "<<presentDay<<"\n";
			cout<<name<<" Salary Per Day "<<salaryPerDay<<"\n";
			cout<<"-------------------------\n";
			cout<<name<<"Final Salary "<<finalSalary;
		}
};
int main(){
	int id,presentDay,salaryPerDay;
	string name,contact;
	cout<<"Enter The Id,Name,Contact Of Employee\n";
	cin>>id>>name>>contact;
	cout<<"Enter The PresentDay And Salary PerDay Of"<<name<<"\n";
	cin>>presentDay>>salaryPerDay;
	Salary s(id,name,contact,presentDay,salaryPerDay);
	s.calculateSalary();
	s.show();
	return 0;
}
