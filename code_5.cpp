// multiple inheritance
//having multiple base class and a single child class

#include<iostream>
using namespace std;
class AcademicR{
	protected:
		int acad_score;
	public:
		void score_acad(){
			cout<<"Enter academic score: ";
			cin>>acad_score;
		}
};
class SportsR{
	protected:
		int spor_score;
	public:	
	void score_spor(){
			cout<<"Enter sports score: ";
			cin>>spor_score;
		}
};
class Student: public AcademicR, public SportsR{
	public:
		void display(){
		cout<<"TOTAL SCORE: ";
		cout<<(acad_score+spor_score);
	}
};
int main(){
	Student obj;
	obj.score_acad();
	obj.score_spor();
	obj.display();
	return 0;
}
