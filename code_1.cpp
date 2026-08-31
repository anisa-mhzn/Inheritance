// 1 basic inheritance

#include<iostream>
#include<string>
using namespace std;

class Person{
	private:
		string name;
		int age;
	public:
		void inputP(){
			cout<<"Enter name and age: ";
			cin>>name>>age;
		}
		void displayP(){
			cout<<endl<<"NAME and AGE: ";
			cout<<name<<" "<<age;
		}
};
class Student:public Person{
	private:
		int stdID;
		double marks;
	public:
		void inputS(){
			inputP();
			cout<<"Enter stdID and marks: ";
			cin>>stdID>>marks;
		}
		void displayS(){
			displayP();
			cout<<endl<<"STD_ID and MARKS: ";
			cout<<stdID<<" "<<marks;
		}
};
int main(){
	Student s1,s2;
	s1.inputS();
	s2.inputS();
	s1.displayS(); 
	s2.displayS();
	return 0;
}  