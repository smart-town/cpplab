#include <iostream>
#include "codesplitting.h"

using namespace std;

void CodeSplitExample::printMessage() {
    cout << "Code Splitting refers to the process of breaking down a large code base into smaller, more manageable files or modules. This helps improve the organization, maintainability, and readability of the code" << endl;
}


int main() {
    CodeSplitExample e1;
    e1.printMessage();
    return 0;
}