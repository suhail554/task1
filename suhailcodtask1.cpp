#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        std::cin >> userGuess;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again: ";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
        }
    }

    return 0;
}