/*Create a class named 'Rectangle' with two data members- length and breadth and a 
method to calculate the area which is 'length*breadth'. The class has three constructors 
which are : 
1 - having no parameter - values of both length and breadth are assigned zero. 
2 - having two numbers as parameters - the two numbers are assigned as length and 
breadth respectively. 
3 - having one number as parameter - both length and breadth are assigned that number. 
Now, create objects of the 'Rectangle' class having none, one and two parameters and print 
their areas.*/

#include<iostream>
using namespace std;
class Rectangle{
	public:
		Rectangle(){
			int length=0,breath=0;
			cout<<"Area Of Reactangle: "<<(length*breath);	
		}
		Rectangle(int &length){
			cout<<"\nArea Of Reactangle: "<<(length*length);
		}
		Rectangle(int &length,int &breath){
			cout<<"\nArea Of Reactangle: "<<(length*breath);		
		}		
};
int main(){
	int length,breath;
	cout<<"Enter The Length & Breath Of Rectangle\n";
	cin>>length>>breath;
	Rectangle r;
	Rectangle r1(length);
	Rectangle r2(length,breath);
	return 0;
}
