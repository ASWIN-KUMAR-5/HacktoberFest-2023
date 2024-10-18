#include <iostream>
#include <string>

class CaesarCipher {
public:
    // Constructor to set the shift value
    CaesarCipher(int shift) : shift(shift) {}

    // Function to encode the text
    std::string encode(const std::string& plaintext) {
        return shiftText(plaintext, shift);
    }

    // Function to decode the text
    std::string decode(const std::string& ciphertext) {
        return shiftText(ciphertext, -shift);
    }

private:
    int shift;

    // Helper function to shift characters
    std::string shiftText(const std::string& text, int shiftAmount) {
        std::string result;
        for (char c : text) {
            // Handle uppercase letters
            if (isupper(c)) {
                result += char(int(c + shiftAmount - 'A') % 26 + 'A');
            }
            // Handle lowercase letters
            else if (islower(c)) {
                result += char(int(c + shiftAmount - 'a') % 26 + 'a');
            }
            // Non-alphabetic characters are added unchanged
            else {
                result += c;
            }
        }
        return result;
    }
};

int main() {
    int shift;
    std::cout << "Enter the shift value (1-25): ";
    std::cin >> shift;

    // Input validation for shift
    if (shift < 1 || shift > 25) {
        std::cerr << "Invalid shift value. Please enter a number between 1 and 25." << std::endl;
        return 1;
    }

    CaesarCipher cipher(shift);
    
    std::string choice, text;
    std::cout << "Would you like to encode or decode? (e/d): ";
    std::cin >> choice;

    // Input validation for choice
    if (choice != "e" && choice != "d") {
        std::cerr << "Invalid choice. Please enter 'e' for encode or 'd' for decode." << std::endl;
        return 1;
    }

    std::cout << "Enter the text: ";
    std::cin.ignore();  // Clear the newline character from the input buffer
    std::getline(std::cin, text);

    if (choice == "e") {
        std::string encodedText = cipher.encode(text);
        std::cout << "Encoded text: " << encodedText << std::endl;
    } else {
        std::string decodedText = cipher.decode(text);
        std::cout << "Decoded text: " << decodedText << std::endl;
    }

    return 0;
}
