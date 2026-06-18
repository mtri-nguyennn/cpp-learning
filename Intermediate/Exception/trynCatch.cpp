#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw "Cannot divide by zero";
    }
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0);
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}