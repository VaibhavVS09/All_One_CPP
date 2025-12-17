/* Create a class named 'Programming'. While creating an object of the class, if nothing is 
passed to it, then the message "I love programming languages" should be printed. If some 
String is passed to it, then in place of "programming languages" the name of that String 
variable should be printed. 
For example, while creating object if we pass "Java", then "I love Java" should be printed.*/

#include<iostream>
using namespace std;
class Programming{
	public:
		Programming(){
			cout<<"I love programming languages\n";
		}
		Programming(string &ch){
			cout<<"I Love "<<ch;
		}
};
int main(){
	string str;
	cout<<"1st Case Output:\n";
	Programming p;
	cout<<"\n2nd Case Output\n";
	cout<<"Enter The Language Name\n";
	cin>>str;
	Programming p1(str);
	return 0;
}