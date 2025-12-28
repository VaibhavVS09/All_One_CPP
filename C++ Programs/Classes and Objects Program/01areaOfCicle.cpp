//WAP to create the class name as Circle with functions void setRadius() and void showArea() and calculate area of circle

#include<iostream>
using namespace std;
class Circle{
	private:
		float radius;
	public:
		void setRadius(float& radius){
			this->radius=radius;
		}
		void showArea(){
			float area=2*3.14*radius;
			cout<<"Area of cricle is: "<<area;
		}
};
int main(){
	float radi;
	cout<<"Enter the radius of circle\n";
	cin>>radi;
	Circle c;
	c.setRadius(radi);
	c.showArea();
	return 0;
}