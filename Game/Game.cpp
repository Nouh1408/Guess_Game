#include <iostream> // for input/output
#include <cstdlib> // for random number generation
#include <ctime> // for time()

using namespace std;

int main() {
    // seed the random number generator
    srand(time(NULL));

    // set up the game
    const int MAX_NUMBER = 100;
    int targetNumber = rand() % MAX_NUMBER + 1;
    int guess, numGuesses = 0;

    // play the game
    do {
        // get the user's guess
        cout << "Guess a number between 1 and " << MAX_NUMBER << ": ";
        cin >> guess;

        // check if the guess is too high, too low, or correct
        if (guess > targetNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < targetNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Correct! You win!" << endl;
        }

        numGuesses++;
    } while (guess != targetNumber);

    // display the number of guesses it took to win
    cout << "You took " << numGuesses << " guess(es) to win." << endl;

    return 0;
}