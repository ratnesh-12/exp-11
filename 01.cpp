#include <iostream>
using namespace std;

class Student{
public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};
int main(){
    Student s1;
    s1.name = "Ratnesh";
    s1.branch = "E&TC";
    s1.subject = "C++";
    s1.result = 7.4;
    cout<<"Student info:"<<endl;
    cout<<s1.name<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.subject<<endl;
    cout<<s1.result<<endl;
    cout<<endl;
    
    Student s2;
    s2.name = "Mayank Yadav";
    s2.branch = "E&TC";
    s2.subject = "C++";
    s2.result = 8.6;
    cout<<"Student info:"<<endl;
    cout<<s2.name<<endl;
    cout<<s2.branch<<endl;
    cout<<s2.subject<<endl;
    cout<<s2.result<<endl;
    
    return 0;
}
OUTPUT:
Student info:
Ratnesh
E&TC
C++
7.4

Student info:
Mayank Yadav
E&TC
C++
8.6

=== Code Execution Successful ===
