//WAP to create the class name as FindMax with a following a constructor and methods 

#include<iostream>
using namespace std;
class FindMax{
	private:
		int* arr; // Use a pointer or std::vector to manage dynamic arrays
		int size;
	public:
		FindMax(int* a,int s){
			arr=a;
			size=s;
		}
	int maxelement(){
		int max=arr[0];
		for(int i=0;i<size;i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		return max;
	}
	int findsmx(){
		int max=arr[0],smax=0;
		for(int i=0;i<size;i++){
			if(arr[i]>max){
				smax=max;
				max=arr[i];
			}else if(arr[i]>smax && arr[i]!=max){
				smax=arr[i];
			}
		}
		return smax;
	}	
};
int main(){
	int size,max;
	cout<<"Enter The Size Of Array\n";
	cin>>size;
	
	// Dynamically allocate memory for the array using 'new'
	int* arr=new int[size];
	
	cout<<"Enter The Element In Array\n";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	FindMax fm(arr,size);
	max=fm.maxelement();
	int smax=fm.findsmx();
	cout<<"Max In Array Is:"<<max;
	cout<<"\nSecond Max In array is:"<<smax;
	delete[] arr;// deallocate the dynamically allocated memory
	arr=nullptr;//settng pointer to null after deletion
	
	return 0;
}