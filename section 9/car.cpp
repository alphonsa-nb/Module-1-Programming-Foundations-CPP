#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int speed;

    void accelerate(int amount) {
        speed = speed + amount;
    }

    void display() {
        cout << brand << " "
             << model << " "
             << speed << " km/h" << endl;
    }
};

int main() {
    Car car1, car2;

    car1.brand = "Maruti";
    car1.model = "Swift";
    car1.speed = 20;

    car2.brand = "Hyundai";
    car2.model = "i20";
    car2.speed = 30;

    car1.accelerate(20);
    car2.accelerate(30);

    car1.display();
    car2.display();

    return 0;
}