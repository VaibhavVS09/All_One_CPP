//WAP to create the class name as Seller with a following functions void acceptSellingCostPrice(int sp,int cp),void showProfitLoss()
#include<iostream>
using namespace std;
class Seller{
	private:
		int sp,cp,profit;
	public:
	void acceptPrice(int &sp,int &cp){
		this->sp=sp;
		this->cp=cp;
	}
	void showProfitLoss(){
		if(sp>cp){
			cout<<"Profit is: "<<sp-cp;
		}else{
			cout<<"Loss is: "<<abs(sp-cp);
		}
	}
};
int main(){
	int sp,cp;
	cout<<"Enter the selling price:\n";
	cin>>sp;
	cout<<"Enter the costing price:\n";
	cin>>cp;
	Seller s;
	s.acceptPrice(sp,cp);
	s.showProfitLoss();
	return 0;
}