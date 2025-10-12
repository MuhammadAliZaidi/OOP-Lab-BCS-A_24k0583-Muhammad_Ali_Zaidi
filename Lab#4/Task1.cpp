#include <iostream>
#include <string>
using namespace std;

class MobileAccount {
private:
    double accountBalance;
    string simNumber;

public:
    MobileAccount() {
        accountBalance = 50.0;
        simNumber = "";
    }

    MobileAccount(string number, double initialAmount) {
        simNumber = number;
        accountBalance = initialAmount;
    }

    void display() {
        cout << "SIM Number: " << simNumber << endl;
        cout << "Account Balance: " << accountBalance << " PKR" << endl;
    }
};

int main() {
    MobileAccount user1;
    MobileAccount user2("03001234567", 200.0);

    cout << "User 1 Details:" << endl;
    user1.display();

    cout << "\nUser 2 Details:" << endl;
    user2.display();

    return 0;
}

