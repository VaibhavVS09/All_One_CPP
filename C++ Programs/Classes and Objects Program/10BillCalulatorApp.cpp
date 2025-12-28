//BillCalulatorApp
#include<iostream>
using namespace std;
class Product{
	private:
		int id,qty,rate;
		string name;
	public:
		void setId(int id){
			this->id=id;
		}
		void setName(string name){
			this->name=name;
		}
		void setQty(int qty){
			this->qty=qty;
		}
		void setRate(int rate){
			this->rate=rate;
		}
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		int getQty(){
			return qty;
		}
		int getRate(){
			return rate;
		}
		int getTotal(){
			return qty*rate;
		}
};
class Bill{
	private:
		Product* products;
		int size;
	public:
		Bill(Product* arr, int size){
			this->size=size;
			this->products=arr;
		}
		
	// Destructor to free dynamically allocated memory
	~Bill(){
		delete[] products;
	}
	
		void calculateBill(){
			int totalbill;
			cout<<"Product Id		Product Name		Qty		Rate		Total Bill\n";
			for(int i=0;i<size;i++){
				totalbill+=products[i].getTotal();
				cout<<products[i].getId()<<"				"<<products[i].getName()<<"		"<<products[i].getQty()<<"		"<<products[i].getRate()<<"		"<<products[i].getTotal()<<"\n";			
			}
			cout<<"							-----Total Bill Of Order"<<totalbill;	
		}
	
};
int main(){
	int id,qty,rate,size,i;
	string name;
	cout<<"Enter the total product count:\n";
	cin>>size;
	Product* arr=new Product[size];
	for(i=0;i<size;i++){
		cout<<"Enter the product id,name,qty,rate\n";
		cin>>id>>name>>qty>>rate;
		arr[i].setId(id);
		arr[i].setName(name);
		arr[i].setQty(qty);
		arr[i].setRate(rate);
	}
	Bill b(arr,size);
	b.calculateBill();
	
	delete[] arr;
	arr=nullptr;
	return 0;
}