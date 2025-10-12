#include <iostream>
using namespace std;

class PropertyDeed {
private:
    int* ownerID;

public:
    PropertyDeed(int id) {
        ownerID = new int;
        *ownerID = id;
    }

    PropertyDeed(const PropertyDeed& other) { // Shallow copy
        ownerID = other.ownerID;
    }

    PropertyDeed(const PropertyDeed& other, bool deepCopy) { // Deep copy
        if (deepCopy) {
            ownerID = new int;
            *ownerID = *(other.ownerID);
        } else {
            ownerID = other.ownerID;
        }
    }

    void setOwnerID(int id) {
        *ownerID = id;
    }

    void display() {
        cout << "Owner ID Value: " << *ownerID << endl;
        cout << "Memory Address: " << ownerID << endl;
    }

    ~PropertyDeed() {
        delete ownerID;
        ownerID = nullptr;
    }
};

int main() {
    PropertyDeed original(1001);
    PropertyDeed shallowCopy(original);
    PropertyDeed deepCopy(original, true);

    cout << "Original Object:" << endl;
    original.display();

    cout << "\nShallow Copy:" << endl;
    shallowCopy.display();

    cout << "\nDeep Copy:" << endl;
    deepCopy.display();

    cout << "\nChanging Original Owner ID to 2002...\n" << endl;
    original.setOwnerID(2002);

    cout << "Original Object:" << endl;
    original.display();

    cout << "\nShallow Copy (shares memory):" << endl;
    shallowCopy.display();

    cout << "\nDeep Copy (independent memory):" << endl;
    deepCopy.display();

    return 0;
}
