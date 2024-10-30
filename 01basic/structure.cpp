#include<iostream>
using namespace std;

namespace lhh {
    struct Employee {
        int id;
        std::string name;
        float salary;
    };

    class Student {
        int roll_no;
        std::string name;
        float marks;
    public:
        void set_data(int r, std::string n, float m) {
            roll_no = r;
            name = n;
            marks = m;
        }

        void display() {
            cout << "Roll no: " << roll_no
                 << "\nName:  " << name
                 << "\nMarks: " << marks << endl;
        }
    };
};




int main() {
    lhh::Employee e1 = {1, "hhg", 22222};
    std::cout << e1.name << "," << e1.id << endl;

    lhh::Student s1;
    s1.set_data(1, "HHG", 93);
    s1.display();
    return 0;
}