// single inheritance
#include<iostream>
using namespace std;

class Shape{
	protected:
		int length, width;
	public:
		void input(){
			cout<<"Enter length and width: ";
			cin>>length>>width;
		}
};
class Rectangle: public Shape{
	public:
		void display(){
			cout<<"AREA OF RECTANGLE: ";
			cout<<length*width;
		}
};
int main(){
	Rectangle obj;
	obj.input();
	obj.display();
	return 0;
}