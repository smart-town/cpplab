#include <iostream>

using namespace std;


struct Person {
    std::string name;
    int age;
    float height;
};

class Man {
    public:
    std::string name;
    int age;

    void printInfo() {
        cout << "Name:" << name << ", Age:" << age << endl;
    };
};

int main() {
    int num = 10;
    int& numRef = num;
    cout << "[Reference]s are an alternative way to share memory location between variable, allowing you to create an alias for another variable" << endl;
    cout << numRef << endl;

    cout << "[User-Defined Data types] user defined data types are types that are defined by the programmer: Structures, Classes, Unions  " << endl;
    Person p1 = {"HHG", 28, 1.75};
    cout << p1.name << ";" << p1.age << ";" << p1.height << endl;

    Man man1;
    man1.name = "HHGG";
    man1.age = 18;
    man1.printInfo();
    return 0;
}