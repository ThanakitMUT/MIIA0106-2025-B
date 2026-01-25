// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include  <iostream>
#include  <string>
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
    // เอามาจาก LAB0901 ข้อ 2
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
	// เอามาจาก LAB0901 ข้อ 3
    void print()
    {
        cout << "ID: " << id << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "Line ID: " << lineId << endl;
        cout << "Phone: " << phone << endl;
    }
};
void printStudent(Student s)
{
	// TODO: แสดงข้อมูลจาก object s
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;
	cout << "Phone: " << s.phone << endl;

}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	// TODO: s1.input();
	s1.input();

	cout << "\n=== Output (from function) ===\n";
	// TODO: printStudent(s1);
	printStudent(s1);

	return 0;
}
