// TODO 1) เติม field: id, nickname, height, weight 
// TODO 2) เขียน method input(), print(), calcBMI()

#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	// TODO
	// เอามาจาก LAB0901 ข้อ 1
	string id;
	string nickname;
	string lineId;
	string phone;

	//รับ ค่าความสูงเป็น	(เมตร)
	//รับ ค่าหนักเป็น	(กิโลกรัม)
	double height;
	double weight;

	// methods
	
	// TODO 2
	//เอามาจาก LAB0901 ข้อ 2
	void input()
	{
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Line ID: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;

		cout << "Enter Height (m): ";
		cin >> height;

		cout << "Enter Weight (kg): ";
		cin >> weight;
	}

	// TODO 3
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Line ID: " << lineId << endl;
		cout << "Phone: " << phone << endl;

		cout << "Height (m): " << height << endl;
		cout << "Weight (kg): " << weight << endl;
	}

	double calcBMI()
	{
		return weight / (height * height);
	}
};
int main()
{
	Student s1;
	cout << "=== Input Student ===\n";
	// TODO: s1.input();
	s1.input();
	cout << "\n=== Student Info ===\n";
	// TODO: s1.print();
	s1.print();
	cout << "BMI : " << s1.calcBMI() << endl;
	
	return 0;
}

