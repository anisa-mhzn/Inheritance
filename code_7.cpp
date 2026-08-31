//qn 7  multilevel inheritance
//derive class inherits from other derived class

#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
	public:
		void inputP(){
			cout<<"ENTER NAME= ";
			cin>>name;
		}
		void displayP(){
			cout<<"NAME = "<<name;
		}
};
class Employee: public Person{
	protected:
		string role;
	public:
		void inputE(){
			inputP();
			cout<<"ENTER ROLE= ";
			cin>>role;
		}
		void displayE(){
			displayP();
			cout<<" ROLE = "<<role;
		}
};
class Manager: public Employee{
protected:
		double sal;
	public:
		void inputM(){
			inputE();
			cout<<"ENTER SALARY= ";
			cin>>sal;
		}
		void displayM(){
			displayE();
			cout<<" SALARY = "<<sal;
		}
};
int main(){
	Manager obj;
    obj.inputM();
	cout<<"PERSONAL DETAILS"<<endl;
	obj.displayM();
	return 0;
}
