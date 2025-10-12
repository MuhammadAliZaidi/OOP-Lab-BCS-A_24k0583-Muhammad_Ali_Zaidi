#include <iostream>
#include <string>
using namespace std;

class OrderDetails {
private:
    int orderID;
    string itemName;
    const double deliveryFee;

public:
    OrderDetails(int orderID, string itemName, double deliveryFee)
        : deliveryFee(deliveryFee) {
        this->orderID = orderID;
        this->itemName = itemName;
    }

    void display() {
        cout << "Order ID: " << orderID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Delivery Fee: " << deliveryFee << endl;
    }

    ~OrderDetails() {
        cout << "Order " << orderID << " archived and memory cleared." << endl;
    }
};

int main() {
    OrderDetails order1(1001, "Wireless Headphones", 250.0);
    order1.display();
    return 0;
}
