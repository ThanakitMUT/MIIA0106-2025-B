#include <iostream>
#include <string>
using namespace std;

struct Student {
    //TODO 1) เพิ่ม field ใน struct Student ให้ครบ: studentID, nickname
    string studentID;
    string nickname;
};

int main()
{
    Student s1;
    Student* p = nullptr;

    // TODO 2) ใช้ pointer p ชี้ไปที่ s1
    // TODO: p = &s1;
    p = &s1;

    // TODO 3) กำหนดค่าให้ใช้ p->
    // TODO: p->studentID = ...
    // TODO: p->nickname = ...

    p->studentID = "681210028";
    p->nickname = "Pooh";

    // TODO 4) แสดงผลใช้ p->
    cout << "*ID: " << p->studentID << endl;
    cout << "*Nickname: " << p->nickname << endl;

    return 0;
}