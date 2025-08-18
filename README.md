# Classes and Object in CPP
# Experiment 1: Student Information
# Aim

To create a class Student with public data members and display student details.

# Theory

A class in C++ is a user-defined blueprint that groups related data and functions together. When we create an object of the class, it acts as a variable that stores values for the class members. In this experiment, the Student class is used to store details like name and age, showing how a class can represent real-world entities.

Code: 
```
class Student {
public:
    string name;
    int age;
};
```
# Experiment 2: Car Details
# Aim

To create a class Car with members brand and year and display details.

# Theory

Classes can be used to model objects from real life. Each car has properties such as brand and year of manufacture. By creating a class Car, we can encapsulate these properties and then create multiple objects to represent different cars. This demonstrates how OOP helps in organizing code and reusing it efficiently.

Code: 
```
class Car {
public:
    string brand;
    int year;
};
```
# Experiment 3: Rectangle Area
# Aim

To calculate area of a rectangle using a class method.

# Theory

Along with storing data, classes can also have member functions that operate on the stored values. This experiment introduces functions inside a class, where the area() function calculates the area of a rectangle. This shows how data and behavior can be combined together inside a class.

Code:
```
class Rectangle {
public:
    float length, width;
    float area() { return length * width; }
};
```
# Experiment 4: Simple Calculator
# Aim

To perform addition, subtraction, multiplication, and division using a class.

# Theory

Classes can group multiple functions together to provide different operations on the same set of data. Here, the Calculator class contains methods for addition, subtraction, multiplication, and division. This highlights the concept of modularity, where related operations are kept in one place, making code clean and reusable.

Code:
```
class Calculator {
public:
    float num1, num2;
    float add() { return num1 + num2; }
    float subtract() { return num1 - num2; }
    float multiply() { return num1 * num2; }
    float divide() { return (num2 != 0) ? num1 / num2 : 0; }
};
```
# Experiment 5: Cube Volume (Inside and Outside Methods)
# Aim

To calculate cube volume with methods defined inside and outside the class.

# Theory

C++ allows us to define member functions both inside and outside the class. Functions defined inside are treated as inline functions, while those defined outside use the scope resolution operator (::). This experiment shows both approaches to help understand function definition flexibility in OOP.

Code:
```
class Cube {
public:
    int side;
    int volumeInside() { return side*side*side; }
    int volumeOutside();
};

int Cube::volumeOutside() {
    return side*side*side;
}
```
# Experiment 6: Public and Private Variables
# Aim

To show encapsulation using private variables and public methods.

# Theory

In C++, encapsulation means hiding the internal details of a class and only exposing what is necessary. Private members cannot be accessed directly from outside the class. Instead, we use getter and setter methods to safely modify and access values. This ensures data protection and controlled access, which is a key principle of OOP.

Code:
```
class Cube {
private:
    int side;
public:
    void setSide(int s) { side = s; }
    int volume() { return side*side*side; }
};
```
# Conclusion:

Through these experiments, we understood how classes and objects form the foundation of Object-Oriented Programming (OOP) in C++. We saw how classes can hold data and functions, how objects represent real-world entities, and how encapsulation ensures safe access to data. By practicing with simple examples like students, cars, rectangles, calculators, and cubes, we built a strong base for more advanced concepts such as constructors, inheritance, and polymorphism. These experiments show that OOP not only organizes code better but also makes it easier to maintain and scale programs.
