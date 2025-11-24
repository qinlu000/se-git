#include <iostream>

void greet() {
    std::cout << "Hello from LOCAL MAIN branch!" << std::endl;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << "Hello, World 123!" << std::endl;
    std::cout << "2 * 3 = " << multiply(2, 3) << std::endl;
    return 0;
}
