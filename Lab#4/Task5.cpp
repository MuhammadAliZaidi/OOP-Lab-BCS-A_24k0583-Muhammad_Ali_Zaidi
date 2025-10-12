#include <iostream>
#include <string>
using namespace std;

class CurrencyExchange {
private:
    const double PKR_to_USD_Rate;
    string& branchName;
    int totalTransactions;

public:
    CurrencyExchange(double rate, string& name, int transactions)
        : PKR_to_USD_Rate(rate), branchName(name), totalTransactions(transactions) {}

    double convertPKRtoUSD(double amountPKR) {
        return amountPKR / PKR_to_USD_Rate;
    }

    void display() {
        cout << "Branch: " << branchName << endl;
        cout << "Exchange Rate (PKR to USD): " << PKR_to_USD_Rate << endl;
        cout << "Total Transactions: " << totalTransactions << endl;
    }
};

int main() {
    string branch = " Main Branch";
    CurrencyExchange counter(278.5, branch, 120);

    counter.display();
    double amountPKR = 55700;
    cout << "\nPKR " << amountPKR << " = USD " << counter.convertPKRtoUSD(amountPKR) << endl;

    return 0;
}
