#include <iostream.h>
#include <fstream.h>
#include <conio.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    // Create a binary file and write data to it
    ofstream outfile("people.dat", ios::out | ios::binary);
    if (!outfile) {
        cout << "Error creating file!";
        return 1;
    }

    Person p1 = {"John", 30};
    Person p2 = {"Jane", 25};
    outfile.write((char*)&p1, sizeof(p1));
    outfile.write((char*)&p2, sizeof(p2));

    // Close the file
    outfile.close();

    // Open the file and read data from it
    ifstream infile("people.dat", ios::in | ios::binary);
    if (!infile) {
        cout << "Error opening file!";
        return 1;
    }

    Person p3, p4;
    infile.read((char*)&p3, sizeof(p3));
    infile.read((char*)&p4, sizeof(p4));

    // Close the file
    infile.close();

    // Print the results
    cout << "Person 1: " << p3.name << " " << p3.age << endl;
    cout << "Person 2: " << p4.name << " " << p4.age << endl;

    getch();
    return 0;
}
