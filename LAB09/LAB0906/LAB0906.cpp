// TODO 1) เติม field ใน class Student: id, nickname
 // TODO 2) ใช้ pointer p ชี้ไปที่ s1 
// TODO 3) กำหนดค่าโดยใช้ p-> 
// TODO 4) แสดงผลโดยใช้ p->
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
	}

	// TODO 3
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Line ID: " << lineId << endl;
		cout << "Phone: " << phone << endl;
	}
};
int main()
{
	Student s1;
	Student* p = nullptr;
	// TODO: p = &s1;
	// TODO: p->id = ...;
	// TODO: p->nickname = ...;
	p = &s1;

	p->id = "65050123";
	p->nickname = "Alice";
	p->lineId = "alice_line";
	p->phone = "0812345678";

	cout << "ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;
	cout << "Line ID: " << p->lineId << endl;
	cout << "Phone: " << p->phone << endl;

	return 0;
}



