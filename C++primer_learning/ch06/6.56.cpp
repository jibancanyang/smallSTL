#include <iostream>
#include <cassert>
#include <string>
#include <vector>

int add(int a, int b) {
    return a + b;
}

int mins(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    assert(b);
    return a / b;
}


int main() 
{
    std::vector<int (*)(int, int) > v{add, multiply, divide, mins};
    for (auto c : v) {
        std::cout << c(10, 1) << std::endl;
    }
    return 0;
}

