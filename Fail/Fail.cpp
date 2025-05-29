#include <iostream>
#include <vector>

using namespace std;

// Base class Shape
class Shape {
public:
    virtual float Area() = 0;         //Made pure virtual to ensure derived classes must implement Area()
    virtual ~Shape() {}               //Added virtual destructor to allow proper cleanup via base class pointers
};

// Derived class Circle
class Circle : public Shape {
public:
    Circle(float r) : m_radius(r) {}  //Used member initializer list (cleaner and preferred)

    float Area() override {           //Correctly overrides base Area method
        return 3.14f * m_radius * m_radius;
    }

    void SetRadius(float radius) {    //Removed const to allow member modification; fixed assignment logic
        m_radius = radius;
    }

    float GetRadius() const {         //Added const for getter since it doesn’t modify state
        return m_radius;
    }

private:
    float m_radius;
};

//Derived class Rectangle hrkhfvkjsg
class Rectangle : public Shape {
public:
    Rectangle(float w, float h) : m_width(w), m_height(h) {}  //Used initializer list

    float Area() override {                                   //Fixed function name from "Areas" to "Area" and marked override
        return m_width * m_height;
    }

private:
    float m_width;
    float m_height;
};

int main() {
    vector<Shape*> shapes;

    //Changed type to pointer and used new properly
    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);  //Now works correctly with the fixed SetRadius

    Rectangle* r = new Rectangle(4.0f, 5.0f);  //Fixed missing semicolon

    shapes.push_back(c);  //Was trying to push a non-pointer before; now fixed
    shapes.push_back(r);

    //Fixed off by one error in loop (was i <= shapes.size();)
    for (int i = 0; i < shapes.size(); i++) {
        cout << "Area: " << shapes[i]->Area() << endl;

        //Used dynamic cast to check if shape is a Circle and print radius
        Circle* circle = dynamic_cast<Circle*>(shapes[i]);
        if (circle) {
            cout << "Radius: " << circle->GetRadius() << endl;
        }
    }

    //Fixed memory leak by deleting all heap-allocated objects
    for (Shape* s : shapes) {
        delete s;
    }

    return 0;
}