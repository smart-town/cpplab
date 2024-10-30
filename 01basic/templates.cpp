#include<iostream>

using namespace std;

template <typename T>
class Container {
    T element;
public:
    Container(T elem) : element(elem) {}
    T getElement() { return element; }
};

int main() {
    Container<string> c1{"cherry"};
    cout << c1.getElement() << endl;
    return 0;
}