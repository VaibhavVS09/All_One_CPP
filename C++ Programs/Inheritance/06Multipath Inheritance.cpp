//Multipath Inheritance 
#include<iostream>
using namespace std;
class RBI{
	public:
	   string approve;
	void get(){
		cout<<"Approvel: "<<approve;
	}
};
class ATM:virtual public RBI{
	public:
		int amount;
		ATM(int amt):amount(amt){
		}
	void info(){
		cout<<"Total amount widrawal is: "<<amount;
	}
};
class Online:virtual public RBI{
	public:
		int transfer;
		Online(int trans):transfer(trans){
		}
	void show(){
		cout<<"\nTotal amount transfer to another account is: "<<transfer;
	}
};
class Account:public ATM,public Online{
	public:
		int total,accountNo;
		Account(int amt,int trans,int accountNo,string approve):Online(trans),ATM(amt){
			this->accountNo=accountNo;
			this->approve=approve;
		} 
		
		void totalamt(){
			total=amount+transfer;
			info();
			show();
			cout<<"\nTotal amount sened by widrawl and by transfer is: "<<total;
		}
};
int main(){
	Account a(100,200,1120,"yes");
//	a.info();
//	a.show();
	a.totalamt();
	return 0;
}