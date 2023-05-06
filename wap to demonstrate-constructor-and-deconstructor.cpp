#include <iostream.h>
#include <conio.h>

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called." << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    getch();
    return 0;
}
