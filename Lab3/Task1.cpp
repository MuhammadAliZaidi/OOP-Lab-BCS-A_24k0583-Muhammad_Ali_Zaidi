#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
};
int main() {
    Student s;
    s.name = "Ali khan";
    s.rollNumber = 2025;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    return 0;
}
