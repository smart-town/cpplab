#include<iostream>
#include<stdexcept>
using namespace std;

int divide(int num1, int num2) {
    if (num2 == 0) {
        // throw "Division by zero";
        throw std::runtime_error("Division by zero!!");
    }
    return num1 / num2;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    try {
        int result = divide(num1, num2);
        cout << num1 << "/" << num2 << "=" << result << endl;
    } catch (const exception& e) {
        cerr << "Error:" << e.what() << endl;
    } catch (...) {
        cerr << "Unknown Error" << endl;
    }
    return 0;
}