#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0;
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
        delete animals[i];
    }

    return 0;
}
