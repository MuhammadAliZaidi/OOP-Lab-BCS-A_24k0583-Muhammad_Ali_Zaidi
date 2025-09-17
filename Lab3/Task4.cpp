
#include <iostream>
using namespace std;
class Calculator {
private:
    int x, y;  
public:
    void setNumbers(int a, int b);  
    int add();                     
};
void Calculator::setNumbers(int a, int b) {
    x = a;  
    y = b;  
}

int Calculator::add() {
    return x + y;  
}
int main() {
    Calculator calc;
    calc.setNumbers(234, 2);
    cout << "Sum: " << calc.add() << endl;
    return 0;
}
