#include <iostream>										// รวมไลบรารีสำหรับการใช้งาน input/output
#include <string>										// รวมไลบรารีสำหรับการใช้งาน input/output และ string
using namespace std;									// ใช้ namespace std

void swapValue(int a, int b)							// ในฟังก์ชัน swapValue รับค่าพารามิเตอร์ a และ b แบบ pass by value
{
	int temp;											// ประกาศตัวแปร temp ชนิด int
	temp = a;											// เก็บค่าของ a ลงในตัวแปร temp
	a = b;												// เก็บค่าของ b ลงในตัวแปร a
	b = temp;											// เก็บค่าของ temp ลงในตัวแปร b
	cout << "Inside swapValue function: " << endl;		// แสดงผลข้อความ Inside swapValue function:
	cout << "a = " << a << " b = " << b << endl;		// แสดงผลค่าของ a และ b หลังจากการสลับค่า
	
}
void swapRef(int& a, int& b)							// ในฟังก์ชัน swapRef รับค่าพารามิเตอร์ a และ b แบบ pass by reference
{
	int temp;											// ประกาศตัวแปร temp ชนิด int
	temp = a;											// เก็บค่าของ a ลงในตัวแปร temp
	a = b;												// เก็บค่าของ b ลงในตัวแปร a
	b = temp;											// เก็บค่าของ temp ลงในตัวแปร b
	cout << "Inside swapRef function: " << endl;		// แสดงผลข้อความ Inside swapRef function:
	cout << "a = " << a << " b = " << b << endl;		// แสดงผลค่าของ a และ b หลังจากการสลับค่า

}

int main()
{
	int a, b;											// ประกาศตัวแปร a, b ชนิด int
	cout << "Enter a integers: ";						// แสดงผลข้อความ Enter a integer:
	cin >> a;											// รับค่าจากคีย์บอร์ดเก็บในตัวแปร a
	cout << "Enter b integers: ";						// แสดงผลข้อความ Enter b integer:
	cin >> b;											// รับค่าจากคีย์บอร์ดเก็บในตัวแปร b
	cout << "Before swapValue function: " << endl;		// แสดงผลข้อความ Before swapValue function:
	cout << "a = " << a << " b = " << b << endl;		// แสดงผลค่าของ a และ b ก่อนการสลับค่า
	swapValue(a, b);									// เรียกใช้ฟังก์ชัน swapValue เพื่อสลับค่าของ a และ b
	cout << "a = " << a << " b = " << b << endl;		// แสดงผลค่าของ a และ b หลังจากการเรียกใช้ฟังก์ชัน swapValue

	swapRef(a, b);										// เรียกใช้ฟังก์ชัน swapRef เพื่อสลับค่าของ a และ b								
	cout << "a = " << a << " b = " << b << endl;		// แสดงผลค่าของ a และ b หลังจากการเรียกใช้ฟังก์ชัน swapRef

	return 1;											// คืนค่าจากฟังก์ชัน main
}