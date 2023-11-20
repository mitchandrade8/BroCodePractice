
#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    // Getting user input for calculation values
    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    // Refactored Version:
    c = sqrt(pow(a, 2) + pow(b, 2));

    // First Version:
    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);

    std::cout << "side C: " << c;
    
    return 0;

}