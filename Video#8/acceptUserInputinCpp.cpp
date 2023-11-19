
#include <iostream>

// MARK: - Key Notes:
    // cout << (insertion operator)
    // cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << " ";
    std::cout << "You are " << age << " years old";


    return 0;

}