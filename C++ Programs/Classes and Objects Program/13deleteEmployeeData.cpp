/*WAP to create the class name as Employee class and create the array object of Employee class of size 5 and store all data in it and delete the 
specified employee data using employee id */
#include<iostream>
using namespace std;
class Employee{
	private:
		int id,sal;
		string name;
	public:
		void setId(int id){
			this->id=id;
		}
		void setName(string name){
			this->name=name;
		}
		void setSalary(int sal){
			this->sal=sal;
		}
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		int getSalary(){
			return sal;
		}
};
class EmpDelete{
	private:
	Employee* emp;
	int size,delid,index;
	public:
		EmpDelete(Employee* emp,int size){
			this->emp=emp;
			this->size=size;
		}
		~EmpDelete(){
			delete[] emp;
		}
		void RemoveEmp(){
			cout<<"Enter the employee id for deleting employee data:\n";
			cin>>delid;
			for(int i=0;i<size;i++){
					if(emp[i].getId()==delid){
						index=i;
						break;
					}
			}
			for(int j=index;j<size;j++){
				emp[j]=emp[j+1];
			}
		}
		void show(){
			cout<<"Employee data after removing:\n";
			for(int i=0;i<size-1;i++){
				cout<<"\nEmployee name is: "<<emp[i].getName();
				cout<<"\nEmployee id is: "<<emp[i].getId();
				cout<<"\nEmployee salary is: "<<emp[i].getSalary();
			}
		}
};
int main(){
	int id,sal,size;
	string name;
	cout<<"Enter count of employee data\n";
	cin>>size;
	Employee* e=new Employee[size];
	for(int i=0;i<size;i++){
		cout<<"Enter the employee id,name and salary\n";
		cin>>id>>name>>sal;
		e[i].setId(id);
		e[i].setName(name);
		e[i].setSalary(sal);
	}
	EmpDelete s(e,size);
	s.RemoveEmp();
	s.show();
	delete[] e;
	e=nullptr;
	return 0;
}