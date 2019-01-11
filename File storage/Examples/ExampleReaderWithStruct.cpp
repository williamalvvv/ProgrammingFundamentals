// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct lectura{
	int age;
	string name;
};

int main () {
  string line;
  vector<lectura> personas;
  lectura ingreso;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while (true)
    {
      getline(myfile,line);
      if(line.length()!=0){
      	//ingreso.age=atoi(line.c_str());
      	ingreso.age=stoi(line);
      	getline(myfile,line);
      	ingreso.name=line;
      	personas.push_back(ingreso);
	  }
	  else{
	  	break;
	  }
    }
    myfile.close();
  }
  else{
  	cout << "Unable to open file"; 	
  } 
  cout<<"registered Data: "<<endl<<endl;
  for(int i=0;i<personas.size();i++){
  	cout<<"Register #"<<(1+i)<<endl;
  	cout<<personas[i].age+2<<endl;
  	cout<<personas[i].name<<endl;
  	cout<<"--------"<<endl;
  }
  return 0;
}
