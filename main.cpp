#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Hello, Welcome to Number Guessing Game" << std::endl;
    std::cout << "Guess a number between 1 & 100" << std::endl;
    std::cout << "Please select the difficulty level:\n 1. Easy (10 Chances)\n 2. Medium (5 Chances)\n 3. Hard (3 Chances)" << std::endl;

    int tries;
    std::cin >> tries;

    std::srand(std::time(0));
    int randomNumber = rand() % 100 + 1; // Range: 1 to 100
    int number = 0;
    int userInput;

    if (tries == 1) {
        std::cout << "Great! You have selected the Easy Difficulty" << std::endl;
        number = 10;
    } else if (tries == 2) {
        std::cout << "Great! You have selected the Medium Difficulty" << std::endl;
        number = 5;
    } else if (tries == 3) {
        std::cout << "Great! You have selected the Hard Difficulty" << std::endl;
        number = 3;
    } else {
        std::cout << "Invalid difficulty selection. Exiting..." << std::endl;
        return 1;
    }

    while (number > 0) {
        std::cout << "Enter your guess: ";
        std::cin >> userInput;
        number--;

        if (userInput == randomNumber) {
            std::cout << "Hooray! You win! & you did it with " << number << " chances to spare" << std::endl;
            break;
        } else if (userInput > randomNumber) {
            std::cout << "Too high! Try a lower number.\n";
        } else {
            std::cout << "Too low! Try a higher number.\n";
        }
    }

    if (number == 0 && userInput != randomNumber) {
        std::cout << "Game Over! The correct number was: " << randomNumber << std::endl;
    }

    return 0;
}
