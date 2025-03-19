#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int rollNo;
    string name;

public:
    void setData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); // To clear the input buffer
        getline(cin, name);
    }
    void displayData() {
        cout << "Roll Number: " << rollNo << ", Name: " << name << endl;
    }
    void saveToFile() {
        ofstream file("student.dat", ios::binary);
        file.write((char *)this, sizeof(*this));
        file.close();
        cout << "Data saved to file.\n";
    }
    void loadFromFile() {
        ifstream file("
