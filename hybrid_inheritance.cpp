// hybrid inheritance
#include<iostream>
using namespace std;
class performance{
	protected:
		int per_marks;
	public:
		void inputP(){
			cout<<"ENTER PERFORMANCE MARKS= ";
			cin>>per_marks;
		}
	//	void showP(){
	//		cout<<per_marks;
	//	}
};
class sports{
	protected:
		int spor_marks;
	public:
		void inputS(){
			cout<<"ENTER SPORTS MARKS= ";
			cin>>spor_marks;
		}
	//	void showS(){
	//	cout<<spor_marks;
	//}
};
class participate: public performance, public sports{
	protected:
		int cul_marks;
	public:
		void inputC(){
			cout<<"ENTER CULTURAL MARKS= ";
			cin>>cul_marks;
		}
	//	void showC(){
	//	cout<<cul_marks;
	//}
		
};
class student: public participate{
	protected:
		int total;
	public:
		void showStd(){
			cout<<"OVERALL MARKS= ";
			cout<<(spor_marks+per_marks+cul_marks);
		}
};
int main(){
	student s;
	s.inputP();
	s.inputS();
	s.inputC();
	s.showStd();
    return 0;
}