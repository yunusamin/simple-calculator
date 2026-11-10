#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int main() {
    int a = 10, b = 5;
    cout << "Add: " << add(a, b) << endl;
    cout << "Subtract: " << subtract(a, b) << endl;
    cout << "Multiply: " << multiply(a, b) << endl;
    return 0;
}