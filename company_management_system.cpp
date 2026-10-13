//company management system
//single, hiearcheal and multi level in heritance


//employee-> manager, engineer
//employee->engineer->clerk
//employee/login->admin

#include<iostream>
using namespace std;

class Employee{  //base class
	protected:
		int empId;
		string name;
		
	public:
	    void input(){
	    	cout<<"Enter ID & NAME: ";
	    	cin>>empId>>name;
		}
		void display(){
			cout<<endl<<"EMPID "<<"NAME "<<endl;
			cout<<empId<<" "<<name<<endl<<endl;
		}
};

class Manager: public Employee{  //derive class  (single inheritance)
	protected:
		float sal;
	public:
		void getSal(){
			input();
			cout<<"Enter Salary ";
			cin>>sal;
		}
		void showSal(){
			cout<<"EMPID "<<"NAME "<<"SALARY "<<endl;
			cout<<empId<<" "<<name<<" "<<sal<<endl<<endl;
		} 
	
};

class Engineer: public Employee{   //multilevel inheritance
	protected:
		string role;
	public:
		void inputDetail(){
			input();
			cout<<"Enter your role: ";
			cin>>role;
		}
		
		void showDetail(){
			cout<<"EMPID "<<"NAME "<<"ROLE "<<endl;
			cout<<empId<<" "<<name<<" "<<role<<endl;
		}
};

class Clerk: public Engineer{
	protected:
		float work_hrs;
	public:
		void takeVal(){
			//input();
			inputDetail();
			cout<<"Enter working hours: ";
			cin>>work_hrs;
			cout<<endl;
		}
		void displayDetail(){
			showDetail();
			cout<<" WORK HOURS ";
			cout<<work_hrs<<endl<<endl;
		}
};
class Login{
	protected:
		string username, password;
	public:
		void inputLogin(){
			cout<<"ENTER usename and password: ";
			cin>>username>>password;
		}
		
		void loginInfo(){
			cout<<"USERNAME "<<" PASSWORD "<<endl;
			cout<<username<<" "<<password<<endl<<endl;
		}
};

class Admin: public Employee, public Login{  //multiple inheritance
	public:
		void getAdmin(){
			input();
			inputLogin();
		}
		void showAdmin(){
			display();
			loginInfo();
		}
};
int main(){
	Manager m;
	m.getSal();
	m.showSal();
	
	Clerk c;
	c.takeVal();
	c.displayDetail();
	
	Admin a;
	a.getAdmin();
	a.showAdmin();
}