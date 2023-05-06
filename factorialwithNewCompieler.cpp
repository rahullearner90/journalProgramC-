#include <iostream>

int main() {
    int num;
    unsigned long long fact = 1;

    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 2; i <= num; i++) {
        fact *= i;
    }

    std::cout << "Factorial of " << num << " is " << fact << std::endl;

    return 0;
}
