#include <iostream>
#include <string>

using namespace std;

int maxOfthree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}

int	main()
{
	int a, b, c; // ประกาศตัวแปร a, b, c ชนิด int
	int maxvalue = -1000000;

	cout << "Enter a integer: "; // แสดงผลข้อความ Enter an integer:
	cin >> a; // รับค่าจากคีย์บอร์ดเก็บในตัวแปร a
	cout << "Enter b integer: "; // แสดงผลข้อความ Enter an integer:
	cin >> b; // รับค่าจากคีย์บอร์ดเก็บในตัวแปร b
	cout << "Enter c integer: "; // แสดงผลข้อความ Enter an integer:
	cin >> c; // รับค่าจากคีย์บอร์ดเก็บในตัวแปร c

	maxvalue = maxOfthree(a, b, c); 
	cout << "The Maximum value is : " << maxvalue << endl;



	return 1;
}