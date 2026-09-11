//qn6 hiearchial inheritance
//only one base class many child class

#include<iostream>
using namespace std;
class Account{
	protected:
		double saving_amt;
		double current_amt;
	public:
		void input_saving(){
			cout<<"Enter saving amount= ";
			cin>>saving_amt;
		}
		void input_current(){
			cout<<"Enter current amount= ";
			cin>>current_amt;
		}
};
class Saving_acc: public Account{
	public:
		void show_saving(){
			cout<<"TOTAL SAVINGS= "<<saving_amt<<endl;
		}
};
class Current_acc: public Account{
	public:
		void show_current(){
			cout<<"TOTAL MONEY= "<<current_amt;
		}
};
int main(){
	Saving_acc s;
	Current_acc c;
	s.input_saving();
	c.input_current();
	s.show_saving();
	c.show_current();
	return 0;
} 
