/*WAP to create the class name as Employee class and create the array object of Employee class of size 5 and store all data in it and arrange 
all employee data in ascending order salary wise.*/
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
class SalSort{
	private:
	Employee* emp;
	int size;
	public:
		SalSort(Employee* emp,int size){
			this->emp=emp;
			this->size=size;
		}
		~SalSort(){
			delete[] emp;
		}
		void sortting(){
			for(int i=0;i<size;i++){
				for(int j=i+1;j<size;j++){
					if(emp[i].getSalary()>emp[j].getSalary()){
						Employee temp=emp[i];
						emp[i]=emp[j];
						emp[j]=temp;
					}
				}
			}
		}
		void show(){
			cout<<"Employee after sorting:\n";
			for(int i=0;i<size;i++){
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
	SalSort s(e,size);
	s.sortting();
	s.show();
	delete[] e;
	e=nullptr;
	return 0;
}