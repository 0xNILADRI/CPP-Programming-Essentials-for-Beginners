/*

In this code:

Abstraction: The base class "Shape" is an abstract class with a pure virtual function calculateArea(), which means it cannot be instantiated directly.
Encapsulation: The Rectangle class encapsulates its data members width and height and provides getter and setter methods to access and modify them.
Inheritance: The Rectangle class inherits from the Shape base class, and it provides its implementation of the calculateArea() method.
Polymorphism: The Shape pointer array shapes holds pointers to objects of the Rectangle class. By using the base class pointer, we can call the calculateArea() method, which will resolve to the appropriate implementation based on the actual object type at runtime.


The output of this program will be:

Area of Shape 1: 15
Area of Shape 2: 15

*/

#include <iostream>
#include <string>

// Abstraction: The base class "Shape" is an abstract class that defines a pure virtual function "calculateArea()"
// This function is meant to be overridden by derived classes to provide specific implementations.
class Shape {
public:
    virtual double calculateArea() const = 0; // Pure virtual function, makes Shape an abstract class.
};

// Encapsulation: The class "Rectangle" encapsulates its data members and exposes them using public getter and setter functions.
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getWidth() const { return width; }
    double getHeight() const { return height; }

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    // Inheritance: The "Rectangle" class inherits from the "Shape" base class and provides its implementation of "calculateArea()".
    // Polymorphism: We use the same function signature "calculateArea()" in both the base and derived classes.
    // At runtime, the appropriate implementation is called based on the actual object type.
    virtual double calculateArea() const override {
        return width * height;
    }
};

int main() {
    // Polymorphism: We create an array of Shape pointers and assign objects of derived classes (Rectangle) to it.
    Shape* shapes[2];

    // Encapsulation: We create objects of the "Rectangle" class using its constructor and setter methods.
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(7.5, 2.0);

    shapes[0] = &rect1;
    shapes[1] = &rect2;

    // Abstraction & Polymorphism: We loop through the array of Shape pointers and call the "calculateArea()" method.
    for (int i = 0; i < 2; ++i) {
        std::cout << "Area of Shape " << i + 1 << ": " << shapes[i]->calculateArea() << std::endl;
    }

    return 0;
}
