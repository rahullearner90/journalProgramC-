#include <iostream.h>
#include <conio.h>

// Base class
class Vehicle {
protected:
    int wheels;
    int seats;

public:
    Vehicle(int w, int s) {
        wheels = w;
        seats = s;
    }

    void display() {
        cout << "This vehicle has " << wheels << " wheels and " << seats << " seats." << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    Car(int s) : Vehicle(4, s) {}

    void drive() {
        cout << "Driving the car..." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    Bike() : Vehicle(2, 1) {}

    void ride() {
        cout << "Riding the bike..." << endl;
    }
};

int main() {
    // Create an object of Car and call its member functions
    Car myCar(5);
    myCar.display();
    myCar.drive();

    // Create an object of Bike and call its member functions
    Bike myBike;
    myBike.display();
    myBike.ride();

    getch();
    return 0;
}
