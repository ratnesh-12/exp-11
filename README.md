# Classes and Objects in CPP
***

# OOP Basics in C++

## Objective

To investigate and apply object-oriented programming concepts in C++ by implementing classes, public/private data members, member functions (methods defined both inside and outside a class), and basic data manipulation.

## Tools and Technologies

**IDE**: Any C++ compatible IDE  
**Language**: C++  
**Concepts**: Classes, objects, public/private members, methods, encapsulation, user input

***

## Background

C++ is a powerful language that supports object-oriented programming (OOP) through **classes** and **objects**. OOP helps organize code by bundling data (members) and functionality (methods), allowing encapsulation and abstraction while supporting concepts like inheritance and polymorphism. Basic class structures serve as the foundation for more advanced applications and efficient program design.

OOP principles involve:
- Grouping data and associated functions (methods) together
- Controlling access via public/private specifiers (encapsulation)
- Creating and using reusable code with user-defined types (classes and objects)

***

## Key Concepts

### 1. Understanding Classes and Objects

A **class** is a blueprint for objects, specifying data attributes and functions. An **object** is an instance of a class.

**Syntax:**
```cpp
class ClassName {
 public:
  // Data members (variables)
  // Member functions (methods)
};
```

### 2. Public and Private Specifiers

- **Public**: Members accessible from outside the class (good for safe sharing).
- **Private**: Members accessible only from within class methods (good for data protection).

### 3. Methods Inside and Outside Class

- Methods can be defined **inside** the class (usually for simple functions).
- Or declared within the class and defined **outside** (for clarity/organization).

***

## Experiments

### 1. Student Information

#### Objective

Create a class for student information, instantiate objects, and print their details.

#### Steps

- Define a class `Student` with public data members `name` and `age`.
- Create an object and print its details.

#### Sample Code

```cpp
#include 
using namespace std;

class Student {
  public:
    string name;
    int age;
};

int main() {
    Student s;
    s.name = "Alice";
    s.age = 20;
    cout 
using namespace std;

class Car {
  public:
    string brand;
    int year;
};

int main() {
    Car car1;
    cout > car1.brand;
    cout > car1.year;
    cout 
using namespace std;

class Rectangle {
  public:
    float length;
    float width;
    float area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.length = 5.0;
    rect.width = 3.0;
    cout 
using namespace std;

class Calculator {
 public:
    double num1, num2;
    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() { return num1 / num2; }
};

int main() {
    Calculator calc;
    cout > calc.num1 >> calc.num2;
    cout 
using namespace std;

class Cube {
 public:
  double side;
  double volume(); // Declaration only
};

double Cube::volume() { // Out-of-class definition
    return side * side * side;
}

int main() {
    Cube c;
    c.side = 4;
    cout 
using namespace std;

class Cube {
 private:
    double side;
 public:
    void setSide(double s) {
        side = s;
    }
    double getSide() {
        return side;
    }
    double volume() {
        return side * side * side;
    }
};

int main() {
    Cube c;
    c.setSide(5);
    cout << "Cube Side: " << c.getSide() << endl;
    cout << "Volume of Cube: " << c.volume() << endl;
    return 0;
}
```

#### Output
```
Cube Side: 5
Volume of Cube: 125
```

***

## Conclusion

These experiments introduce the foundational concepts of object-oriented programming in C++. You practiced creating classes and objects, manipulating access via public/private specifiers, reading input from users, and defining methods inside and outside the class. Mastery of these basics paves the way for advanced C++ programming and efficient software design using OOP.

***
