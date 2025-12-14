#include <iostream>
#include <string>

using namespace std;
void printMessage(int& a)
{
	a = a + 30;
	cout << "hello" << endl;
	cout << "The value of a is: " << a << endl;

}




int main()
{
	int a = 10;
	printMessage(a);
	cout << "The value of a is: " << a << endl;

	return 1;
}
