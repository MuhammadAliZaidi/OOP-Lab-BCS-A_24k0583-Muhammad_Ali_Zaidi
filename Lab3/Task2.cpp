#include <iostream>
using namespace std;
class Student {
public:
    string name;
private:    
    int rollNumber;
public:
    void setRollNo(int x)
    {
        rollNumber = x;
    }
    int getRollNo()
    {
        return rollNumber;
    }
};
int main() {
    Student s;
    s.name = "Ali Khan";
    s.setRollNo(2025);
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.getRollNo() << endl;
    return 0;
}
