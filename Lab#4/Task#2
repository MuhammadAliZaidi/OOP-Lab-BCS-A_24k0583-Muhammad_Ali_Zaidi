#include <iostream>
#include <string>
using namespace std;

class NUCES_Student {
private:
    int id;
    string name;

public:
    NUCES_Student() {
        id = 0;
        name = "Not Registered";
    }

    NUCES_Student(int id) {
        this->id = id;
        name = "Name Pending";
    }

    NUCES_Student(int id, string name) {
        this->id = id;
        this->name = name;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    NUCES_Student s1;
    NUCES_Student s2(101);
    NUCES_Student s3(102, "Ali Zaidi");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    cout << "\nStudent 3 Details:" << endl;
    s3.display();

    return 0;
}
