#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing shape..." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing circle..." << endl;
    }
};

int main() {
    Shape* shape = new Circle();
    shape->draw();

    delete shape;
    return 0;
}
