#include <iostream>
using namespace std;

class Calculator {
public:
    float num1, num2;

    Calculator(float a, float b) {
        num1 = a;
        num2 = b;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 != 0)
            return num1 / num2;
        else
            return 0;
    }
};

int main() {
    float a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Calculator c(a, b);

    cout << "Addition = " << c.add() << endl;
    cout << "Subtraction = " << c.subtract() << endl;
    cout << "Multiplication = " << c.multiply() << endl;
    if (b != 0)
        cout << "Division = " << c.divide() << endl;
    else
        cout << "Division by zero not possible!" << endl;

    return 0;
}
OUTPUT: 
Enter first number: 12
Enter second number: 10
Addition = 22
Subtraction = 2
Multiplication = 120
Division = 1.2

=== Code Execution Successful ===
