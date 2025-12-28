//WAP to create the class name as Rectangle with functions void setWidhthLength() and void showArea() and calculate area of Rectangle

#include<iostream>
using namespace std;
class Rectangle{
	private:
		int width,length;
	public:
		void setWidthLength(int& width, int&length){
			this->width=width;
			this->length=length;
		}
		void showArea(){
			int area=width*length;
			cout<<"Area of Rectangle is: "<<area;
		}
};
int main(){
	int width,length;
	cout<<"Enter the width and length of Rectangle:\n";
	cin>>width>>length;
	Rectangle r;
	r.setWidthLength(width,length);
	r.showArea();
	return 0;
}