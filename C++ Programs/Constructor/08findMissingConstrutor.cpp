/* WAP to Find Missing Element int the array using a constructor  
Here we need to create the class name as FindMissing with a following constructor and method. 
*/
#include<iostream>
using namespace std;
class FindMissing{
	private:
		int* arr;
		int s;
	public:
		FindMissing(int* a,int size){
			arr=a;
			s=size;
		}
		void Misselement(){
			cout<<"Missing element in array are: ";
			for(int i=0;i<s;i++){
				int start=arr[i]+1;
				int end=arr[i+1];
				for(int j=start;j<end;j++){
					cout<<j<<" ";
				}
			}
		}
};
int main(){
	int size;
	cout<<"Enter The Size Of Array:\n";
	cin>>size;
	int* a
	=new int[size];
	cout<<"Enter The Element In Array\n";
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
	FindMissing fm(a,size);
	fm.Misselement();
	
	delete[] a;
	a=nullptr;
	return 0;
}