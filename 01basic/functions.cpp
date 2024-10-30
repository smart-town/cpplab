#include <iostream>

using namespace std;

void lambdaFunction() {
    auto myPrint = [](int a) {
        return a * 2;
    };
    auto b = myPrint(1);
    cout << "B is " << b << endl;
}

int main() {
    std::cout << "hello cpp" << std::endl;
    lambdaFunction();
    return 0;    
}