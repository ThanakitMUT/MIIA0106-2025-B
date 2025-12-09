#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "Thanakit Worrajit";

	cout << "test lab 04 \n";
	cout << "test lab 04-01" << endl;

	
	cout << " Please enter Your Name !";
	
	//cin >> name;
	cin.ignore();

	getline(cin, name);

	cout << "My name is " << name << " ------" << endl;

	return 1;
}
