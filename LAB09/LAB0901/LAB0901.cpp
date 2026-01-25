// TODO 1) เติม field ใน class Student ให้ครบ: id, nickname, lineId, phone 
// TODO 2) เขียน method input() รับค่าจากผู้ใช้ 
// TODO 3) เขียน method print() แสดงข้อมูล
#include <iostream>
#include <string>

using namespace std;
class Student {
public:
	// TODO 
	// porivte
	string id;
	string nickname;
	string lineId;
	string phone;

	//methods

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
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Line ID: " << lineId << endl;
		cout << "Phone: " << phone << endl;
	}
};

// 2 แบบ
// 2.1 by value
//  y = 10;
//	x= y; , x = 10
//	x= x+5; x=15
//  y = 10;
// 2.2 by reference
void input(Student s)
{
	cout << "Enter ID: ";
	cin >> s.id;

	cout << "Enter Nickname: ";
	cin >> s.nickname;

	cout << "Enter Line ID: ";
	cin >> s.lineId;

	cout << "Enter Phone: ";
	cin >> s.phone;
}

void inputREF(Student& s)
{
	cout << "Enter ID: ";
	cin >> s.id;

	cout << "Enter Nickname: ";
	cin >> s.nickname;

	cout << "Enter Line ID: ";
	cin >> s.lineId;

	cout << "Enter Phone: ";
	cin >> s.phone;
}

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	//s1.id = "650610999";
	//inputREF(s1);


	// TODO: s1.input();
	s1.input();
	cout << "ID = " << s1.id << endl;


	cout << "\n=== Output Student 1 ===\n";
	// TODO: s1.print();
	s1.print();

	return 0;
}