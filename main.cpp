#include <iostream>
#include <string>

using namespace std;

class Student {
	public:
		string name;
		int id;
		string course;
		
	void Introduce(){
		cout<<"Name is "<<name<<endl;
		cout<<"ID is "<<id<<endl;
		cout<<"Course is "<<course<<endl;
	}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Student S1;
	S1.name="Sandeep";
	S1.id=106;
	S1.course="IS";
	S1.Introduce();
	return 0;
}
