#include <iostream>
#include <string>
using namespace std;

struct Student
{
    // TODO
    string id;
    string nickname;
    string lineID;
    string phone;
};

// TODO: ฟังก์ชัน เรียงลำดับ
void swapStudent(Student& s1, Student& s2)
{
    // TODO
    Student temp = s1;
    s1 = s2;
    s2 = temp;
}

// TODO: ฟังก์ชัน เรียงลำดับ (bubble sort)
void sortByID(Student students[], int size)
{
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO
        cout << students[i].id << "\t" << students[i].nickname << "\t"
            << students[i].lineID << "\t" << students[i].phone << "\n";
        cout << "------------------------\n";
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter ID: ";
        cin >> students[i].id;
        cout << "Enter Nickname: ";
        cin >> students[i].nickname;
        cout << "Enter Line ID: ";
        cin >> students[i].lineID;
        cout << "Enter Phone: ";
        cin >> students[i].phone;

        cout << endl;
    }

    sortByID(students, SIZE);
    cout << "\n==== Student List (Sorted by ID) ====\n";
    printStudents(students, SIZE);

    return 0;
}