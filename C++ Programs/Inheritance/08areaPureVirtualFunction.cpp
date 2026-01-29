/*WAP to create class name as Area with pure virtual function name as showArea() and declare the
two child classes name as Circle and Rectangle with a following methods 
Create the class name as Circle and inherit the Area class in it and override the showArea() as well as
define the setRadius() method in Circle class.
Declare the class name as Rectangle and inherit the Area class in it and override the showArea()
method with a setLenghtWidth() function*/
#include<iostream>
using namespace std;
class Area{
	public:
	virtual void showArea()=0;
	virtual void setData(float d1, float s2=0)=0; //s2 for Circle
	virtual ~Area();
};
class Circle:public Area{
	private:
	float radius;
	public:
		void setData(float radius,float){
			this->radius=radius;
		}
		void showArea(){
			cout<<"Area of Circle is: "<<(3.14*radius*radius);
		}
};
class Rectangle:public Area{
	private:
		float length,width;
	public:
		void setData(float length,float width){
			this->length=length;
			this->width=width;
		}
		void showArea(){
			cout<<"\nArea of Rectangle is: "<<(length*width);
		}
};
int main(){
	float radius,length,width;
	cout<<"Enter the radius of circle\n";
	cin>>radius;
	cout<<"Enter the length and width of rectangle\n";
	cin>>length>>width;
	Area* a;
	a=new Circle();
	a->setData(radius);
	a->showArea();
	delete a;
	a=new Rectangle();
	a->setData(length,width);
	a->showArea();
	delete a;
	return 0;
}