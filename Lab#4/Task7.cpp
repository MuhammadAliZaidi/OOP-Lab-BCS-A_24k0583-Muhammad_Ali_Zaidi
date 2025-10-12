#include <iostream>
#include <string>
using namespace std;

class SecureBankAccount {
private:
    int accountNumber;
    double balance;
    const string accountType;
    int* logHistory;

public:
    SecureBankAccount(int accountNumber, double initialBalance, const string& type, int logSize)
        : accountType(type) {
        this->accountNumber = accountNumber;
        this->balance = initialBalance;

        if (initialBalance < 500.0) {
            cout << "Error: Initial balance must be at least 500 PKR." << endl;
            logHistory = nullptr;
            return;
        }

        logHistory = new int;
        *logHistory = logSize;

        cout << "Account " << this->accountNumber << " of type " << accountType
             << " created successfully with balance " << this->balance << " PKR." << endl;
    }

    SecureBankAccount(const SecureBankAccount& other)
        : accountType(other.accountType) {
        accountNumber = other.accountNumber;
        balance = other.balance;
        logHistory = new int;
        *logHistory = *(other.logHistory);
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << " PKR" << endl;
        cout << "Log History Size: " << (logHistory ? *logHistory : 0) << endl;
        cout << "Log Memory Address: " << logHistory << endl;
    }

    ~SecureBankAccount() {
        cout << "Deleting log history for Account " << accountNumber << "..." << endl;
        delete logHistory;
        logHistory = nullptr;
        cout << "Account " << accountNumber << " memory cleared." << endl;
    }
};

int main() {
    SecureBankAccount acc1(101, 1000.0, "Current", 10);
    cout << "\nOriginal Account:\n";
    acc1.display();

    SecureBankAccount acc2 = acc1;
    cout << "\nDeep Copied Account:\n";
    acc2.display();

    cout << "\nChanging original log size...\n";
    *(reinterpret_cast<int*>(reinterpret_cast<void*>(&acc1))) = 20; 
    acc1.display();
    acc2.display();

    return 0;
}
