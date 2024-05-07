#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' ||
            std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// this function will count the number of words
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (std::isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}


std::string reverseString(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}


std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalizeNext = true;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalizeNext) {
                c = std::toupper(c);
                capitalizeNext = false;
            } else {
                capitalizeNext = true;
            }
        } else {
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    // Read the text file
    std::ifstream inputFile("exampleFile.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::string line;
    while (std::getline(inputFile, line)) {
        fileData += line + "\n";
    }
    inputFile.close();

    // Calculate and output the number of vowels
    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels in the text file statement: " << vowelCount << std::endl;

    // Calculate and output the number of words
    int wordCount = countWords(fileData);
    std::cout << "Number of words in the text file statement: " << wordCount << std::endl;

    // Reverse the statement and output
    std::string reversedStatement = reverseString(fileData);
    std::cout << "Reversed statement: " << reversedStatement << std::endl;

    // Capitalize the second letter of each word and output
    std::string capitalizedStatement = capitalizeSecondLetter(fileData);
    std::cout << "Statement with second letter capitalized: " << capitalizedStatement << std::endl;

    return 0;
}
