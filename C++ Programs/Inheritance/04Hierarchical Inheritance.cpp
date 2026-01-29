//Hierarchical Inheritance
#include<iostream>
using namespace std;
class Human{
	protected:
		string name;
		int age;
	public:
		//Default Construtor
		//Human(){
		//}
		Human(string name,int age){
			this->name=name;
			this->age=age;
		}
	void display(){
		cout<<"Name is: "<<name<<" Age Is: "<<age;
	}
};
class Student:public Human{
	private:
		int rollno,fees;
	public:
		Student(string name,int age,int rollno,int fees):Human(name,age),rollno(rollno),fees(fees){
		}
	void infostudent(){
		display();
		cout<<"\nStudent rollno is: "<<rollno;
		cout<<"\nStudent Fees Is: "<<fees;
	}
};
class Teacher:public Human{
	private:
		int sal;
	public:
		Teacher(string name,int age,int sal):Human(name,age),sal(sal){
		}
	void infoteacher(){
		display();
		cout<<"\nTeacher salary is: "<<sal;
	}
};
int main(){
	Teacher t("abc",36,100);
	t.infoteacher();
}