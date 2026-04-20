#include <iostream>
using namespace std;

// Example classes for OOP concepts

// 1. Class and Object
class Car {
public:
    string brand;
    int year;
    
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// 2. Encapsulation
class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    double getBalance() {
        return balance;
    }
};

// 3. Inheritance
class Vehicle {
public:
    string type;
    void move() {
        cout << "Vehicle is moving" << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike() {
        type = "Bike";
    }
};

// 4. Polymorphism
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

// 5. Abstraction
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
    virtual void draw() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return 3.14159 * radius * radius;
    }
    
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    cout << "--- Introduction to OOP Concepts with Examples ---" << endl;
    
    // Class and Object
    cout << "\n1. Class and Object:" << endl;
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;
    myCar.display();
    
    // Encapsulation
    cout << "\n2. Encapsulation:" << endl;
    BankAccount account(1000.0);
    account.deposit(500.0);
    cout << "Account balance: $" << account.getBalance() << endl;
    
    // Inheritance
    cout << "\n3. Inheritance:" << endl;
    Bike myBike;
    cout << "Type: " << myBike.type << endl;
    myBike.move();
    
    // Polymorphism
    cout << "\n4. Polymorphism:" << endl;
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();
    
    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
    }
    
    // Clean up
    delete animals[0];
    delete animals[1];
    
    // Abstraction
    cout << "\n5. Abstraction:" << endl;
    Shape* shape = new Circle(5.0);
    cout << "Area: " << shape->area() << endl;
    shape->draw();
    delete shape;
        
    return 0;
}