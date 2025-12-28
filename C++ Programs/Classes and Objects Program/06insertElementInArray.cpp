//WAP to create the class name as InsertArrayEle with a following methods void setIntArray(int arr,int size),void insertValueOnIndex()
#include<iostream>
using namespace std;
class InsertArrayEle{
	private:
		int* arr;
		int size,i;
	public:
		void setIntArray(int* arr,int size){
			this->arr=arr;
			this->size=size;
		}
		void insertValueOnIndex(int index,int value){
			for(i=size;i>=index;i--){
				arr[i]=arr[i-1];
			}
			arr[index]=value;
		}
		void show(){
			cout<<"Array after insterting value:\n";
			for(i=0;i<size;i++){
				cout<<arr[i]<<"\n";
			}
		}	
};
int main(){
	int size,value,index;
	cout<<"Enter the size of array:\n";
	cin>>size;
	int* a=new int[size+1];
	cout<<"Enter the element in array:\n";
	for(int i=0;i<size-1;i++) cin>>a[i];
	cout<<"Enter the value to insert in array:\n";
	cin>>value;
	cout<<"Enter the index to insert value:\n";
	cin>>index;
	InsertArrayEle el;
	el.setIntArray(a,size);
	el.insertValueOnIndex(index,value);
	el.show();
	delete[] a;
	a=nullptr;
	return 0;
}