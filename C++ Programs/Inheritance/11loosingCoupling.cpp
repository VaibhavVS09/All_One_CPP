/*Value is abstract class and it contain the virtual int performCalculation() method It is abstract method and in this class contain the one another method 
name as void setValue() is normal method here we can accept the two values and store in instance variable and it is parent class of Add,Sub,Mul,Div classes
We need to inherit the Value class In all child classes and we need to override the performCalculation() method and write the logics Differently in every child classes
We have another class name as Calculator this class is depend on Value class for perform any operation like as addition,substraction,multiplication or division 
Means for this purpose we create method name as performOperation(Value) s In this method we pass the reference of Value class and it is parent class of all 
classes means this method can accept the reference of any of its child classes and call performCalculation() as per the child object*/

#include<iostream>
using namespace std;
//abstract class or base class
class Value{
	protected:
		int a,b;
	public:
		void setValue(int a,int b){
			this->a=a;
			this->b=b;
		}
		virtual int performCalculation()=0;
};
//derive class or child class
class Add:public Value{
	public:
		int performCalculation(){
			return (a+b);
		}
};
class Sub:public Value{
	public:
		int performCalculation(){
			return (a-b);
		}
};
class Mul:public Value{
	public:
		int performCalculation(){
			return (a*b);
		}
};
class Div:public Value{
	public:
		int performCalculation(){
			return (a/b);
		}	
};
//loose coupling class
class Calculator{
	private:
		Value* v;
	public:
		Calculator(Value* a):v(a){
		}
		void setValue(int a,int b){
			v->setValue(a,b);
		}
		int getResult(){
			v->performCalculation();
		}
};
//main method
int main(){
	int a,b,choise,conn;
	cout<<"Enter the 1st and 2nd value: \n";
	cin>>a>>b;
	do{
	cout<<"1---->For addition\n";
	cout<<"2---->For subtraction\n";
	cout<<"3---->For multipilcation\n";
	cout<<"4---->For division\n";
	cout<<"Enter your choise:\n";
	cin>>choise;

	switch(choise){
		case 1:{
			Add ad;
			Calculator ca(&ad);
			ca.setValue(a,b);
			cout<<"\nAddition Is: "<<ca.getResult();
			break;
		}
		case 2:{
			Sub su;
			Calculator ca(&su);
			ca.setValue(a,b);
			cout<<"\nSubtraction Is: "<<ca.getResult();
			break;
		}
		case 3:{
			Mul mu;
			Calculator ca(&mu);
			ca.setValue(a,b);
			cout<<"\nMuliplication Is: "<<ca.getResult();
			break;
		}	
		case 4:{
			Div di;
			Calculator ca(&di);
			ca.setValue(a,b);
			cout<<"\nDivision Is: "<<ca.getResult();
			break;
		}
		default:
			cout<<"\nWrong input:\n";
	}
	cout<<"\nIf you want to contiune PRESS 1:\n";
	cin>>conn;
	}while(conn==1);
	return 0;
}

