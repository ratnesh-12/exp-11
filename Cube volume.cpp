#include <iostream>
using namespace std;

class Cube {
private:
    float side;   

public:
    Cube(float s) {   
        side = s;
    }

    float volumeInside() {   
        return side * side * side;
    }
};

float volumeOutside(float s) {
    return s * s * s;
}

int main() {
    float s;
    cout << "Enter side of cube: ";
    cin >> s;

    Cube c(s);

    cout << "Volume (method inside class) = " << c.volumeInside() << endl;
    cout << "Volume (method outside class) = " << volumeOutside(s) << endl;

    return 0;
}
OUTPUT: 
Enter side of cube: 6
Volume (method inside class) = 216
Volume (method outside class) = 216


=== Code Execution Successful ===
