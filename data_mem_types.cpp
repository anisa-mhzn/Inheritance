// public private and protected

#include<iostream>
using namespace std;

class Employee{
	private:
		int empID;
	protected:
		string name;
	public:
		string post;
		
		Employee(){
			empID=1001;
			name="DIANA";
			post="CEO";
		}
		void display(){
			cout<<"DETAILS : "<<endl;
			cout<<empID<<" "<<name<<" "<<post<<endl;
		}
};
class ManagerPrivate: private Employee{
	public:
		void showPri(){
		cout<<"USING PRIVATE INHERITANCE"<<endl;
		cout<<"NAME: "<<name<<" ";
		cout<<"POST: "<<post<<endl;
	}
};
class ManagerProtected: protected Employee{
	public:
	void showPro(){
		cout<<"USING PROTECTED INHERITANCE"<<endl;
		cout<<"NAME: "<<name<<" ";
		cout<<"POST: "<<post<<endl;
	}
};
class ManagerPublic: public Employee{
	public:
	void showPub(){
		cout<<"USING PUBLIC INHERITANCE"<<endl;
		cout<<"NAME: "<<name<<" ";
		cout<<"POST: "<<post<<endl;
	}
};
int main(){
	ManagerPrivate p1;
	ManagerProtected p2;
	ManagerPublic p3;
	p3.display();
	p1.showPri();
	p2.showPro();
	p3.showPub();
} 