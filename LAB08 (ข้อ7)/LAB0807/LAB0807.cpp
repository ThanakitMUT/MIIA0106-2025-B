#include <iostream>
#include <string>

using namespace std;

struct Phone
{
    string home;
    string mobile;
};

struct Parrent
{
    string name;
    string relationship;
    Phone contact;
};

struct student
{
    string id;
    string nickname;
    string lineid;
    Phone myContact;
    Parrent myparent;
};

int main()
{
    student s1;
    
    // student data
    s1.id = "6701001";
    s1.nickname = "Myn";
    s1.lineid = "gant_dev";
    
    // student contact info
    s1.myContact.home = "02-123-4567";
    s1.myContact.mobile = "081-234-5678";
    
    // parent data
    s1.myparent.name = "Mr.Somchai";
    s1.myparent.relationship = "father";
    
    // parent contact info
    s1.myparent.contact.home = "02-123-4567";
    s1.myparent.contact.mobile = "089-987-6543";
    
    // print student info
    cout << "Student ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Student Mobile: " << s1.myContact.mobile << endl;
    cout << "Parent Name: " << s1.myparent.name << endl;
    cout << "Parent Mobile: " << s1.myparent.contact.mobile << endl;
    
    return 0;
}