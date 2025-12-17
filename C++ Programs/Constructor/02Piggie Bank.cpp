/* Suppose you have a Piggie Bank with an initial amount of $50 and you have to add 
some more amount to it. Create a class 'AddAmount' with a data member named 
'amount' with an initial value of $50. Now make two constructors of this class as follows: 
1 - without any parameter - no amount will be added to the Piggie Bank 
2 - having a parameter which is the amount that will be added to Piggie Bank 
Create object of the 'AddAmount' class and display the final amount in Piggie Bank.*/

#include<iostream>
using namespace std;
class AddAmount{
	public:
		int amount=50;
		AddAmount(){
		}
		AddAmount(int &addamt){
			amount=amount+addamt;
		}
		void checkBalance(){
			cout<<"\nAvable Balance Is: "<<amount;
		}
};
int main(){
	int amt,choise,check;
	AddAmount a;
	do{
		cout<<"1-->Check The Balance:\n";
		cout<<"2-->Add Amount To Account:\n";
		cout<<"----Enter The Choise\n";
		cin>>choise;
		switch(choise){
			case 1:
				a.checkBalance();
				break;
			case 2:	
				cin>>amt;
				AddAmount a1(amt);
				a1.checkBalance();
				break;
	    }
		cout<<"Do You Want To Contiune: \nIf Yes The Press 1\n";
		cin>>check;	
	}while(check==1);
	return 0;
}