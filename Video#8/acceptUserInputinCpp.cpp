
#include <iostream>

// MARK: - Key Notes:
    // cout << (insertion operator)
    // cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    // MARK: - Second Example, how to handle Whitespaces

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    // MARK: - First Example
    //std::cout << "What's your full name?: ";
    //std::getline(std::cin, name);

    //std::cout << "What is your age?: ";
    //std::cin >> age;

    //std::cout << "Hello " << name << '\n';
    //std::cout << "You are " << age << " years old";


    return 0;

}