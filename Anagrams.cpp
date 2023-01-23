#include <iostream>
#include <string>
#include <algorithm>

std::string word;

void generateAnagram() {
    std::random_shuffle(word.begin(), word.end());
    std::cout << "Anagram: " << word << std::endl;
}

int main() {
    std::cout << "Enter a word: ";
    std::cin >> word;

    generateAnagram();

    return 0;
}
