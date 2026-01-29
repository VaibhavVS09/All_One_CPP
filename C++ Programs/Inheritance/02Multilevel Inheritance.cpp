//Multilevel Inheritance
#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
	public:
		Person(string& n):name(n){
		}
		void info(){
			cout<<"Employee name is: "<<name;
		}
};
class Employee:public Person{
	protected:
		int salary;
	public:
		Employee(string& n,int salary):Person(n),salary(salary){
		}
		void salaryInfo(){
			cout<<"\nEmployee salary is: "<<salary;
		}
};
class Manager:public Employee{
	public:
		string dep;
		int empCount;
	Manager(string name,int salary,string dep,int empCount):Employee(name,salary),dep(dep),empCount(empCount){
	}
	void Mangerinfo(){
		cout<<"\nI handle total team";
		cout<<"\nMy department is: "<<dep;
		cout<<"\nTotal employee work under me :"<<empCount;
	}	
};
int main(){	
	Manager m("Ram",100,"Fintech",20);
	m.info();
	m.salaryInfo();
	m.Mangerinfo();
	return 0;
}