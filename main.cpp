#include <iostream>

int main() {
    std::string firstPart, secondPart;
    std::cout << "Hello, User!\nPlease, enter the integer part of the number: " << std::endl;
    std::cin >> firstPart;
    std::cout << "Excellent! Now, please, enter the fractional part of the number: " << std::endl;
    std::cin >> secondPart;
    std::string textNumber = firstPart + "." + secondPart;
    double number = std::stod(textNumber);
    std::cout << "Your Double Number is: " << number << "!" << std::endl;
    return 0;
}
