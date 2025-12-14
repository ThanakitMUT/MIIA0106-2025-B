#include <iostream> // รวมไลบรารีสำหรับการใช้งาน input/output
#include <string> // รวมไลบรารีสำหรับการใช้งาน input/output และ string

using namespace std; // ใช้ namespace std

double circleArea(double radius) // ฟังก์ชันคำนวณพื้นที่วงกลม
{
	return 3.14 * radius * radius; // คืนค่าพื้นที่วงกลม

}
double rectangleArea(double width, double height) // ฟังก์ชันคำนวณพื้นที่สี่เหลี่ยมผืนผ้า
{
	return width * height; // คืนค่าพื้นที่สี่เหลี่ยมผืนผ้า
}

int main() // ฟังก์ชันหลักของโปรแกรม
{
	double radius; // ประกาศตัวแปร radius ชนิด double
	double result; // ประกาศตัวแปร result ชนิด double

	cout << "Enter the radius: "; // แสดงผลข้อความ Enter the radius:
	cin >> radius; // รับค่าจากคีย์บอร์ดเก็บในตัวแปร radius

	//result = 3.14 * radius * radius;
	//cout << "The area of the circle is: " << result << endl;

	result = circleArea(radius); // เรียกใช้ฟังก์ชัน circleArea เพื่อคำนวณพื้นที่วงกลม
	cout << "The area of the circle is: " << result << endl; // เรียกใช้ฟังก์ชัน circleArea เพื่อคำนวณพื้นที่วงกลม

	//width, height
	double width, height; // ประกาศตัวแปร width, height ชนิด double
	cout << "Enter width: "; // แสดงผลข้อความ Enter width:
	cin >> width; // รับค่าจากคีย์บอร์ดเก็บในตัวแปร width
	cout << "Enter height: "; // แสดงผลข้อความ Enter height:
	cin >> height; // รับค่าจากคีย์บอร์ดเก็บในตัวแปร height

	result = rectangleArea(width, height); // เรียกใช้ฟังก์ชัน rectangleArea เพื่อคำนวณพื้นที่สี่เหลี่ยมผืนผ้า
	cout << "The area of the rectangle is: " << result << endl; // แสดงผลพื้นที่สี่เหลี่ยมผืนผ้า







	return 1;
}
