/*WAP to create the class name as Student with a following methods void setSubMarks(int s[], int size),  void calculatePer() :- calculate per.
void checkGrades() :-/here we need to check grades means per>75 && per<=100 then student in distinction if per>60 && per<=75 then in first division
if per>=50 && per<=60 then second division and if per>40 && per<=50 then in third division and if per <40 then student failed*/
#include<iostream>
using namespace std;
class Student{
	private:
		int* s;
		int size;
		float per;
	public:
		void setSubMarks(int* s, int size){
			this->s=s;
			this->size=size;
		}
		void calculatePer(){
			int totalmark=0;
			for(int i=0;i<size;i++){
				totalmark+=s[i];
			}
			per=totalmark/size;
		}
		void checkGrades(){
			if(per>75 && per<=100){
				cout<<"Studnet in distinction";
			}else if(per>60 && per<=75){
				cout<<"Studnet in first division";
			}else if(per>=50 && per<=60){
				cout<<"Studnet in second division";
			}else if(per>40 && per<=50){
				cout<<"Studnet in third division";
			}else{
				cout<<"Studnet is failed";
			}
		}	
};
int main(){
	int size;
	cout<<"Enter the how total subject count:\n";
	cin>>size;
	int* m=new int [size];
	cout<<"Enter the "<<size<<" subject marks:\n";
	for(int i=0;i<size;i++){
		cin>>m[i];
	}
	Student st;
	st.setSubMarks(m,size);
	st.calculatePer();
	st.checkGrades();
	delete[] m;
	m=nullptr;
	return 0;
}