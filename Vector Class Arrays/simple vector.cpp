#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> myvector;
	for (int i=1; i<=5; i++) 
		myvector.push_back(i);
	cout << "myvector contains:";
	for (int it = 0 ; it < myvector.size(); it++)
  		cout <<" "<<myvector.at(it);
}
