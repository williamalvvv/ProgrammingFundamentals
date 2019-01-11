class Student{
	
	int age;
	string name;
	string lastname;
	
	public: Student(){
	
	}

	void greet(){
		cout<<"This is just a greet\n"<<endl;
	}
	
	void customGreet(string msg){
		cout<<"object has sent this string: "<<msg<<endl;
	}
};
