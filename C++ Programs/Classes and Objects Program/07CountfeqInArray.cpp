//WAP to create the class name as ArrayFeqCount with a following methods void setIntArray(int arr,int size),void FeqCount()
#include<iostream>
using namespace std;
class FeqCounterApp{
	private:
		int* arr;
		int size,count,i,j;
	public:
	void setIntArray(int* arr,int size){
		this->arr=arr;
		this->size=size;
	}
	void FeqCount(){
		for(i=0;i<size;i++){
			count=1;
			for(j=i+1;j<size;j++){
				if(arr[i]==arr[j]){
					count++;
					arr[j]=-1;
				}
			}
			if(count>0 && arr[i]!=-1){
				cout<<"\nArray element: "<<arr[i]<<" Count is: "<<count;
			}
		}
	}	
};
int main(){
	int size,i;
	cout<<"Enter the size of array:\n";
	cin>>size;
	int* a=new int[size];
	for(i=0;i<size;i++){
		cin>>a[i];
	}
	FeqCounterApp af;
	af.setIntArray(a,size);
	af.FeqCount();
	delete[] a;
	a=nullptr;
	return 0;
}