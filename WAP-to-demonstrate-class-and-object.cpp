#include <iostream>
#include <conio.h>

using namespace std;

class Employee {
    int id;
    string name;

public:
    void getdata() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
    }

    void putdata() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Employee emp;

    emp.getdata();
    emp.putdata();

    getch();
    return 0;
}
