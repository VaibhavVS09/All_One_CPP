//studentFeeDiscountApp
#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
		int id,totalFees,discFees,actPaidFees;
		string name;
	public:
		Student(int &id,string &name,int &totalFees){
			this->id=id;
			this->name=name;
			this->totalFees=totalFees;
			this->discFees=0;
            this->actPaidFees=totalFees;
		}
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		int getTotalFees(){
			return totalFees;
		}
		void setDiscFees(int discFees){
			this->discFees=discFees;
		}
		int getDiscFees(){
			return discFees;
		}
		void setActPaidFees(int actPaidFees){
			this->actPaidFees=actPaidFees;
		}
		int getActPaidFees(){
			return actPaidFees;
		}
};
class DiscountFeeAlgo{
	private:
	Student student;
	int tofee,disfee,actpaidfee;
	bool diss=false;
	public:
	DiscountFeeAlgo(Student s):student(s){}
	void checkDiscElig(int &per){
		if(per>60){
			tofee=student.getTotalFees();
			disfee=tofee/30;
			actpaidfee=tofee-disfee;
			student.setDiscFees(disfee);
			student.setActPaidFees(actpaidfee);
			diss=true;
		}
	}
	void show(){
		cout<<"\nStudent name is: "<<student.getName();
		cout<<"\nStudent "<<student.getName()<<" id is: "<<student.getId();
		cout<<"\nStudent "<<student.getName()<<" total fess is: "<<student.getTotalFees();
		if(diss){
			cout<<"\n\n----Discount Applied----";
			cout<<"\nStudent "<<student.getName()<<" discount in fee is: "<<student.getDiscFees();
			cout<<"\nStudent "<<student.getName()<<" actual paid fee is: "<<student.getActPaidFees();
			
		}else{
			cout<<"\n\n----Discount Not Applied----";
			cout<<"\nStudent "<<student.getName()<<" discount in fee is: "<<student.getDiscFees();
			cout<<"\nStudent "<<student.getName()<<" actual paid fee is: "<<student.getActPaidFees();
		}
	}
};
int main(){
	int id,totalFees,discFees,actPaidFees,per;
	string name;
	cout<<"Enter the student id, name\n";
	cin>>id>>name;
	cout<<"Enter the student "<<name<<" persentage:\n";
	cin>>per;
	cout<<"Enter the student "<<name<<" totalfees:\n";
	cin>>totalFees;
	Student s1(id,name,totalFees);
	DiscountFeeAlgo dfa(s1);
	dfa.checkDiscElig(per);
	dfa.show();
	return 0;
}
