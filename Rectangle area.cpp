#include <iostream>
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
    Rectangle r;
    cout<<"Enter length: ";
    cin>>r.length;
    cout<<"Enter width: ";
    cin>>r.width;
    cout<<"Area of rectangle: "<<r.area()<<"m.sq"<<endl;
    return 0;
}
OUTPUT:
Enter length: 24
Enter width: 23
Area of rectangle: 552m.sq

=== Code Execution Successful ===
