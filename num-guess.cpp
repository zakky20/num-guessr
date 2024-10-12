#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    // Initialize random seed based on current time
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = rand() % 100 + 1;  // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?";  // Fixed line
    cout << endl;

    // Game loop
    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}

