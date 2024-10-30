#include<iostream>
#include<memory>

using namespace std;

class MyClass {
    public:
    string name{"hello"};
    string address{"unknown"};
    void welcome() {
        cout << "Hello, I AM " << name << " I live in " << address << endl;
    }
};

void test1() {
    for (int i = 0; i < 3000; ++i) { // 增加分配量
        MyClass* c1 = new MyClass();
    }
    MyClass* c1 = new MyClass();
    c1->welcome();
}

void test2() {
    for (int i = 0; i < 3000; ++i) { // 增加分配量
        MyClass c1;
    }
    MyClass c1;
    c1.welcome();
}

void unique_pointer() {
    cout << "Initialize with pointer to a new integer" << endl;
    unique_ptr<int> p1(new int(5));
    cout << "Preferred method (C++14 onwards)" << endl;
    unique_ptr<int> p2 = make_unique<int>(10);
    cout << *p1 << ", " << *p2 << endl;
}

int main() {
    string input;
    unique_pointer();
    
    while (false) {
        getline(cin, input);
        if (input == "quit") {
            break;
        } else if (input == "1") {
            cout << "use new and not delete(in heap)" << endl;
            test1();
        } else if (input == "2") {
            cout << "use Myclass c1(in stack)" << endl;
            test2();
        } else {
            cout << "not support" << endl;
        }
    };
    
    return 0;
}