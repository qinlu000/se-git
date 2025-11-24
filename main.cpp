#include <iostream>

void greet() {
    cout << "Hello from LOCAL MAIN branch!" << endl;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    cout << "Hello, World 123!" << endl;
    cout << "2 * 3 = " << multiply(2, 3) << endl;
    return 0;
}
