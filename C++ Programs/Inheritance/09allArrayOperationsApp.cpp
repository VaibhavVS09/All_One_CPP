/*create interface name as ArrayOperation with method name as PerformOperation(int s[],int size)
Create classes name as Sort, Insertion, Deletion, Reverse and implement the ArrayOperation and write the logics in performOperation() method.*/
#include<iostream>
using namespace std;
class ArrayOperation{
	public:
		virtual void PerformOperation(int* s,int size)=0;
};
class Sort:public ArrayOperation{
	private:
		int* s;
	public:
		void PerformOperation(int* s,int size){
			this->s=s;
			for(int i=0;i<size;i++){
				for(int j=0;j<size;j++){
					if(s[i]>s[j]){
						int temp=s[i];
						s[i]=s[j];
						s[j]=temp;
					}
				}
			}
			cout<<"Array after sorting\n";
			for(int i=0;i<size;i++)cout<<s[i]<<"\n";
		}
};
class Insertion:public ArrayOperation{
	private:
		int index,value;
		int* s;
	public:
		Insertion(int index,int value){
			this->index=index;
			this->value=value;
		}
		void PerformOperation(int* s,int size){
			this->s=s;
			for(int i=size;i>=index;i--){
				s[i]=s[i-1];
			}
			s[index]=value;
			cout<<"Array after inserting value at index\n";
			for(int i=0;i<size+1;i++)cout<<s[i]<<"\n";
		}
};
class Deletion:public ArrayOperation{
	private:
		int index;
		int* s;
	public:
		Deletion(int index){
			this->index=index;
		}
		void PerformOperation(int* s,int size){
			this->s=s;
			for(int i=index;i<size;i++)s[i]=s[i+1];
			cout<<"Array after deleting value at index\n";
			size--;
			for(int i=0;i<size;i++)cout<<s[i]<<"\n";
		}
};
class Reverse:public ArrayOperation{
	private:
		int* s;
	public:
		void PerformOperation(int* s,int size){
			this->s=s;
			for(int i=0;i<(size/2);i++){
				int temp=s[i];
				s[i]=s[size-1];
				s[size-1]=temp;
			}
			cout<<"Array after reverse\n";
			for(int i=0;i<size;i++)cout<<s[i]<<"\n";
		}
};
int main(){
	int size,ch,con,index,value;
	cout<<"Enter the size of array\n";
	cin>>size;
	//int a[size+1];
	int* a=new int[size+1];
	cout<<"Enter the value's in array\n";
	for(int i=0;i<size;i++) cin>>a[i];
	ArrayOperation* ap;
	do{
		cout<<"\n----------------------\n";
		cout<<"1---->For sorting array\n";
		cout<<"2---->For insertion in array\n";
		cout<<"3---->For deletion in array\n";
		cout<<"4---->For reverse array\n";
		cin>>ch;
		switch(ch){
			case 1:{
				ap=new Sort();
				ap->PerformOperation(a,size);
				delete ap;
				break;
			}
			case 2:{
				cout<<"Enter the index for insertion\n And value for index\n";
				cin>>index>>value;
				ap=new Insertion(index,value);
				ap->PerformOperation(a,size);
				delete ap;
				break;
			}
			case 3:{
				cout<<"Enter the index for deletion\n";
				cin>>index;
				ap=new Deletion(index);
				ap->PerformOperation(a,size);
				delete ap;
				break;
			}
			case 4:{
				ap=new Reverse();
				ap->PerformOperation(a,size);
				delete ap;
				break;
			}
			default:
				cout<<"Wrong input:\n";
		}
		cout<<"\nIf you want to continue PRESS:---1\n";
		cin>>con;	
	}while(con==1);
	delete[] a;
	a=nullptr;
	return 0;
}