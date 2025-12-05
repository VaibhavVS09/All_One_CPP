//WAP to enter the selling price of item and cost price of item check seller made profit or loss. 

#include<iostream>
using namespace std;
int main(){
	int cp,sp;
	cout<<"Enter The Cost Price Of Product\n";
	cin>>cp;
	cout<<"Enter The Selling Price Of Product\n";
	cin>>sp;
	if(sp>cp){
		cout<<"Seller Made Profit\n";
	}else{
		cout<<"Seller Made Loss\n";
	}
	return 0;
}