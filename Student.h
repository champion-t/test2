#pragma once
#include <string>
using namespace std;

class Student
{
private:
    int MSSV;
    int age;
    string name;
    string address;
public:
    Student();
    Student(int MSSV, int age, string name, string address);
    void Input();
    void Display();
    ~Student();
};

Student::Student()
{

}

Student::Student(int MSSV, int age, string name, string address)
{
    this->MSSV = MSSV;
    this->age = age;
    this->name = name;
    this->address = address;
}

void Student::Input() 
{
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap tuoi: ";
    cin >> age;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    cout << "Nhap dia chi: ";
    getline(cin, address);
}

void Student::Display()
{
    cout << endl << "Thong tin sinh vien vua nhap la: ";
    cout << endl << "MSSV: " << MSSV << endl;
    cout << "Age: " << age << endl;
    cout << "Fullname: " << name << endl;
    cout << "Address: " << address << endl;
}

Student :: ~Student()
{

}