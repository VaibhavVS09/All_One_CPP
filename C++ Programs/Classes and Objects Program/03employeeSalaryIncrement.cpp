/* WAP to create the class Employee with methods void setPersonalInfo(String name,int id,int basicSal)
void setProgressPer(int progress) :-if progress value is greater than 60 per then increase the basic salary of employee with 30 percentage
void show()*/
#include<iostream>
using namespace std;
class Employee{
	private:
		int id,basicSal,increment;;
		string name;
	public:
		void setPersonalInfo(string& name,int& id,int& basicSal){
			this->id=id;
			this->name=name;
			this->basicSal=basicSal;
		}
		void setProgressPer(int& progress){
			if(progress>60){
				increment=basicSal/30*100;
			}
			basicSal+=increment;
		}
		void show(){
			cout<<"\nEmployee name is: "<<name;
			cout<<"\nEmployee "<<name<<" id is: "<<id;
			cout<<"\nEmployee "<<name<<" increment salary is: "<<basicSal;
		}
};
int main(){
	int id,basicSal,progvalue;
	string name;
	cout<<"Enter the employee Id,Name\n";
	cin>>id>>name;
	cout<<"Enter the employee "<<name<<" Basic Salary\n";
	cin>>basicSal;
	cout<<"Enter the employee "<<name<<" Progress Value\n";
	cin>>progvalue;
	Employee e;
	e.setPersonalInfo(name,id,basicSal);
	e.setProgressPer(progvalue);
	e.show();
	return 0;
}