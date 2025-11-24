#include <iostream>
using namespace std;
void greet() {
    cout << "Hello from greet function!" << endl;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "2 * 3 = " << multiply(2, 3) << endl;
    return 0;
}
