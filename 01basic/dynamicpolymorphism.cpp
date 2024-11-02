#include<iostream>

using namespace std;


class Shape {
    public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
    public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape {
    public:
    void draw() override {
        cout << "Drawing a RECTANGLE" << endl;
    }
};


int main() {
    cout << "Dynamic Polymorphism is a programming concept in object-oriented languages like C++ where a derived class can override or redefine methods of its base class" << endl;
    cout << "This means that a single method call can have different implementations based on the type of object it called on" << endl;

    Shape* shape;
    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape -> draw();

    shape = &rectangle;
    shape -> draw();
    return 0;
}