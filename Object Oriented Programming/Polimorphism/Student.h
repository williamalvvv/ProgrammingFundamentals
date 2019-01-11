#include <iostream>
using namespace std;

class Student{
	protected:
		int age;
		string name;
		string lastname;
	public: Student(){
		cout<<"Student was excecuted"<<endl;
	}

	void greet(){
		cout<<"This is just a greet\n"<<endl;
	}
	
	void customGreet(string msg){
		cout<<"object has sent this string: "<<msg<<endl;
	}
};
