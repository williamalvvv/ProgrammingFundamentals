// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
  	for(int i=0;)
    while ( getline (myfile,line) )
    {
      cout <<"Found Value: "<< line << '\n';
    }
    myfile.close();
  }
  else cout << "Unable to open file"; 
  return 0;
}
