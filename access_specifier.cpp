// ACCESS SPECIFIERS

#include<iostream>
using namespace std;

class Vehicle{
	private:
		int engine;
	protected:
		int window;
	public:
		int seat;
		
		Vehicle(){
			engine=1;
			window=3;
			seat=5;
		}
		void displayV(){
			cout<<"Private (Vehicle): "<<engine<<endl;
			cout<<"Protected (Vehicle): "<<window<<endl;
			cout<<"Public (Vehicle): "<<seat<<endl;
		}
};
class Car: public Vehicle{
	public:
	void displayC(){
		cout<<"Protected (Car): "<<window<<endl;
		cout<<"Public (Car): "<<seat<<endl;
	}
};
int main(){
	
	Car c;
	cout<<"FROM VEHICLE CLASS: "<<endl;
	c.displayV();
	cout<<endl<<"FROM BASE CLASS: "<<endl;
	c.displayC();
	return 0;
}