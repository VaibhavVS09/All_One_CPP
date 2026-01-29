// Singlelevel Inheritance 
#include<iostream>
using namespace std;

class Bank{
	protected:
		string bankName;
	public:
		void printName(){
			cout<<"Name Of Bank Is: "<<bankName;
		}
};
class Branch:public Bank{
	int totalBranch;
	string branchHeadName;
	public:
		Branch(string bankName,int totalBranch,string branchHeadName){
			this->bankName=bankName;
			this->totalBranch=totalBranch;
			this->branchHeadName=branchHeadName;
		}
		void printBranchInfo(){
			cout<<"\nBranch head name is: "<<branchHeadName;
			cout<<"\nTotal branch count is :"<<totalBranch;
		}
};
int main(){
	int totalBranch;
	string branchHeadName,bankName;
	cout<<"Enter the bank name\nbank branch head name\nand total branch count: \n";
	cin>>bankName>>branchHeadName>>totalBranch;
	Branch b(bankName,totalBranch,branchHeadName);
	b.printName();
	b.printBranchInfo();
}
