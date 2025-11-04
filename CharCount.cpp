#include <iostream>
#include <string>

int main() {
    std::string text;
    char target;

    // Get user input
    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << "Enter a character to find: ";
    std::cin >> target;

    int count = 0;
    std::cout << "Occurrences of '" << target << "':\n";

    for (size_t i = 0; i < text.size(); ++i) {
        if (text[i] == target) {
            std::cout << "index: " << i << '\n';
            count++;
        }
    }

    std::cout << "Total occurrences: " << count << '\n';
    return 0;
}
