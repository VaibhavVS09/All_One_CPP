/*WAP To implement the concept of Inheritence for Engg Result.You are required to implement
inheritance between classes. one superclass, two sub classes
Percentage class contain the one method name as calPer(int s[]) with subject marks array
There are two child classes First is CSE and Second is ETC
CSE class contain the parameterized constructor and one method name as showCsePer()
CSE class contain the parameterized constructor and one method name as showCsePer()*/

#include<iostream>
using namespace std;
class Percentage{
	protected:
		int total=0;
		float per;
	public:
		void calPer(int s[],int size){
			for(int i=0;i<size;i++){
				 total=total+s[i];
			}
			per=total/size;
		}
};
class CSE:public Percentage{
	private:
		int id;
		string name,year;
	public:
		CSE(int id,string name,string year){
			this->id=id;
			this->name=name;
			this->year=year;
		}
		void showCSEPer(){
			cout<<"Id of student is: "<<id;
			cout<<"\nName of studnet is: "<<name;
			cout<<"\nYear of student is: "<<year;
			cout<<"\nPercentage if student is: "<<per;
		}
};
class ETC:public Percentage{
	private:
		int id;
		string name,year;
	public:
		ETC(int id,string name,string year){
			this->id=id;
			this->name=name;
			this->year=year;
		}
		void showETCPer(){
			cout<<"Id of student is: "<<id;
			cout<<"\nName of studnet is: "<<name;
			cout<<"\nYear of student is: "<<year;
			cout<<"\nPercentage if student is: "<<per;
		}
};
int main(){
	int id,size,branchcode,con;
	string name,year;
	cout<<"Enter the student id,name,year\n";
	cin>>id>>name>>year;
	cout<<"Enter the total number of subject\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the student subject makrs\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"Enter the student branch-->\n 1--->ECT\n 2--->CSE\n";
	cin>>branchcode;
    do{
    	switch(branchcode){
    		case 1:{
    			CSE c(id,name,year);
    			c.calPer(arr,size);
    			c.showCSEPer();
				break;
			}
    		case 2:{
    			ETC e(id,name,year);
    			e.calPer(arr,size);
    			e.showETCPer();
				break;
			}
    		default:
    			cout<<"Enter right branch code\n";
		}
		cout<<"\nIf want to continue press 1\n";
		cin>>con;
	}while(con==1);
	return 0;
}

