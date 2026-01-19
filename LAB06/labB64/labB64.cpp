#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
	int size;                           // จำนวนของนักเรียน
	cout << "Enter number of students: "; // รับขนาดของนักเรียน
	cin >> size;                        // รับขนาดของนักเรียน
    cin.ignore(); // เคลียร์ newline ก่อน getline

	string* name = new string[size];    // ชื่อนักเรียน
	string* id = new string[size];      // รหัสนักเรียน
	double* score = new double[size];   // คะแนนของนักเรียน
	char* grade = new char[size];       // เกรดของนักเรียน

    // TODO: วนรับข้อมูล size คน
    for (int i = 0; i < size; i++) 
	{
		cout << "-------------------------\n";             // separator
		cout << "Enter student name: ";     // Hint:
		getline(cin >> ws, name[i]);              // สำหรับชื่อ
		cout << "Enter student ID: ";       // Hint:
        cin >> id[i];                       // สำหรับรหัส
        cout << "Enter student score: "; 
        cin >> score[i];


        // TODO: calculateGrade(score[i], grade[i]);
		calculateGrade(score[i], grade[i]);
       
	}
    // TODO: วนแสดงผล size คน ด้วย displayStudentInfo
    for (int i = 0; i < size; i++)
    {
        //cout << "----------\n"; // separator
        displayStudentInfo(name[i], id[i], score[i], grade[i]);
    }

    // TODO: delete[] ให้ครบทุกตัวแปร
	delete[] name;
	delete[] id;
	delete[] score;
	delete[] grade;


    return 0;
}