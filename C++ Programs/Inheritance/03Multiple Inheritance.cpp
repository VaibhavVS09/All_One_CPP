//Multiple Inheritance
#include<iostream>
using namespace std;
class ATM{
	public:
		int amount;
		ATM(int amt):amount(amt){
		}
	void info(){
		cout<<"Total amount widrawal is: "<<amount;
	}
};
class Online{
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
		int total;
		Account(int amt,int trans):Online(trans),ATM(amt){
		} 
		
		void totalamt(){
			total=amount+transfer;
			info();
			show();
			cout<<"\nTotal amount sened by widrawl and by transfer is: "<<total;
		}
};
int main(){
	Account a(100,200);
//	a.info();
//	a.show();
	a.totalamt();
	return 0;
}