#include <iostream>

int main() {
    char ch;
    
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        std::cout << "This is a lowercase character." << std::endl;
    }
    else {
        std::cout << "This is not a lowercase character." << std::endl;
    }

    return 0;
}