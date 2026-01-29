//Hybrid Inheritance
#include<iostream>
using namespace std;

//student
//boy
//girl
//male
//female

class Student{
	public:
		void info(){
			cout<<"I am student\n";
		}
};
class Male{
	public:
		void maleinfo(){
			cout<<"I am male\n";
		}
}; 
class Female{
	public:
		void femaleinfo(){
			cout<<"I am female\n";
		}
};

class Boy:public Student,public Male{
	public:
		void boyinfo(){
			cout<<"I am boy\n";
		}
};
class Girl:public Student,public Female{
	public:
		void girlinfo(){
			cout<<"I am girl\n";
		}
};
int main(){
	Girl g1;
	g1.girlinfo();
	Boy b1;
	b1.info();
}
