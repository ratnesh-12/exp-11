#include <iostream>
using namespace std;

class Cube {
public:
    float side;
    float volumeInside() {
        return side*side*side;
    }
    float volumeOutside();
};
float Cube::volumeOutside() {
    return side*side*side;
}
int main() {
    Cube c;
    cout<<"Enter the side of cube: ";
    cin>>c.side;
    cout<<"Volume (inside method): "<<c.volumeInside()<<endl;
    cout<<"Volume (outside method): "<<c.volumeOutside()<<endl;

    return 0;
}
OUTPUT:
Enter the side of cube: 25
Volume (inside method): 15625
Volume (outside method): 15625

=== Code Execution Successful ===
